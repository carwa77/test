int MTBMSU_UtlRullbana::CalcWoodPos(pwr_sClass_MTBMSU_Packet *PacketPtr)
{
  //Nolla ut först
  for(int i = 0; i < UTLMAXBUNDLES; i++)
    PacketPtr->BundlePositions[i] = 0;
  int bundleDistance = *pwrComm->BCM_BundleDistance;
  int firstBundleDistance = *pwrComm->BCM_FirstBundleDistance;
  int woodDim = *pwrComm->BCM_WoodDim;

  //Beräkna längd där man får placera virke
  //Dra bort marginal framkant och bakkant(samma) + 2*halva virkesbredden
  int length = PacketPtr->Length - 2*(firstBundleDistance) - woodDim;
  //Räkna ut hur många bitar vi kan använda
  int noOfWood = (int)ceil((float)length / (float)bundleDistance);
  int ii = 0;
  //Räkna ut första buntningspositionen
  int firstPos = (PacketPtr->Length - (bundleDistance * (noOfWood-1)))/2;
  do
  {
    PacketPtr->BundlePositions[ii] = firstPos + bundleDistance*ii;
    //Denna är endast för visning
    PacketPtr->BundlePositionsAbs[ii] = PacketPtr->BundlePositions[ii] + *pwrComm->BCM_BundlePos;
    ii++;
  } while ( ii < noOfWood && ii < UTLMAXBUNDLES);

  //TODO KOLLA SÅ ATT VI INTE ÄR FÖRBI BUndlePos[0]
  PacketPtr->NextBundlePos = *pwrComm->BCM_BundlePos + PacketPtr->BundlePositions[0];

  if(PacketPtr->NextBundlePos > PacketPtr->ActFrontPos)
  {
    //TODO vad ska vi göra nu då???
  }

  return OP_SUCCESS;
}




int MTBMSU_UtlRullbana::CalcUnloadPos(pwr_sClass_MTBMSU_Packet *PacketPtr)
{
  if( this->craneDestsUtl->GetDestIndex(PacketPtr, KRN_DEST_UTL_IDX_UTL) == pwr_eCarrNotSelReasonEnum_OK )
  {
    if(*pwrComm->UTL_CenterPacketsOnCarrier)
      PacketPtr->UnloadPos = *pwrComm->UTL_C695MiddlePos + GetMiddleWoodPos(PacketPtr);
    return OP_SUCCESS;
  }
  //Ingen plats hittad! Nolla ut.
  PacketPtr->UnloadPos = 0;
  PacketPtr->UnloadIdx = -1;
  //Men kör vi alltid till mitten kan vi lika gärna göra det
  //utan att veta till vilken kassett
  if(*pwrComm->UTL_CenterPacketsOnCarrier)
    PacketPtr->UnloadPos = *pwrComm->UTL_C695MiddlePos + GetMiddleWoodPos(PacketPtr);

  return OP_FAILED;
}

pwr_tInt32 MTBMSU_UtlRullbana::GetMiddleWoodPos(pwr_sClass_MTBMSU_Packet *PacketPtr)
{
  int nbOfWood = 0;
  for(nbOfWood=0; nbOfWood < UTLMAXBUNDLES; nbOfWood++)
  {
    if(PacketPtr->BundlePositions[nbOfWood] == 0)
      break;
  }
  //Det här ska inte hända
  if(nbOfWood == 0)
    return (PacketPtr->Length / 2);

  //Om det inte är udda antal virkesbitar så vill vi placera pallen mer västerut
  //och då använder vi den bit som är närmast öster om mitten som mittpunkt
  int woodNo = nbOfWood / 2;

  return(PacketPtr->BundlePositions[woodNo]);
    
}



