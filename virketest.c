#include <stdio.h>
#include <math.h>
#define MAXWOOD 20
int main (void)
{
int firstBundleDistance =90;
int woodDim =60;
float platelength=5500;
float bundleDistance=2000;
int bundlepos[20];
int UTL_C695MiddlePos=45500;

int length = platelength - 2*(firstBundleDistance) - woodDim;
int noOfWood = (int)ceil((float)length / (float)bundleDistance);

int firstPos = (platelength - (bundleDistance * (noOfWood-1)))/2;
printf("Första virkespos: %d \n",firstPos);

int ii=0;
 do
  {
    bundlepos[ii] = firstPos + bundleDistance*ii;
    ii++;
  } while ( ii < noOfWood && ii < MAXWOOD);

printf("Antalvirke %d \n",noOfWood);

int woodNo = noOfWood / 2;
int middlepos=bundlepos[woodNo];
int UnloadPos = UTL_C695MiddlePos + middlepos;
printf("Mittvirke %d \n",woodNo+1);
printf("Mitt positionen %d \n",bundlepos[woodNo]);
printf("Avlastpos: %d \n" ,UnloadPos );

int i;
for(i=0; i<noOfWood; i++)
{
printf("Virkespos nr %d: %d\n",i,bundlepos[i] );

}
return 0;
}
