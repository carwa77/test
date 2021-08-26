#include <stdio.h>
#include <string.h>

int main()
{
	char rad1[20]={"hhhhhhhhhhhhhhhhhhhh"};
	char ut[20];
	char ak[20]={"AKER"};
	char lyft[20]={"LYFTER"};
 	int asci;
	int len,len2,i;

	int pos=22222;
	int tiotusen,tusen,hundratal,tiotal,ental,rest;
	len=strlen(rad1);
	/*for(i=0; i<19;i++){
	asci=rad1[i];
	printf("%d \n" ,asci);*/
	/*tiotusen=pos/10000;
	rest=pos-tiotusen*10000;
	tusen=rest/1000;
	rest=rest-tusen*1000;
	hundratal=rest/100;
	rest=rest-hundratal*100;
	tiotal=rest/10;
	ental=rest-tiotal*10;
	printf("tiotusen: %d, tusen: %d, hundratal: %d, tiotal: %d, ental: %d",tiotusen, tusen, hundratal,tiotal,ental);
	
//}
*/
	printf("%s\n",rad1);
	sprintf(rad1,"%s %d",ak, pos);
	printf("%s\n",rad1);
	len=strlen(rad1);
	printf("längd: %d \n",len);
	for(i=len;i<20;i++){
		rad1[i]=53;
	}
	
	for(i=0; i<19;i++){
	//asci=rad1[i];
	printf("%d \n" ,rad1[i]);
	}	
	rad1[20]=0;
	printf("Efter: %s",rad1);




/* Test

	sprintf(rad1,"%d",pos);
	printf("%s",rad1);
	len=strlen(rad1);
	ut[0]=74;
	ut[1]=75; //K
  	ut[2]=76; //:
	len2=strlen(ut);
	printf("%s",ut);
	for(i=len2; i<len+len2;i++){
		ut[i]=rad1[i-len2];
	}

	for(i=len;i<18;i++){
		rad1[i]=0;
	}
	for(i=len+len2;i<14;i++){
	ut[i]=0;
	}
	printf("längd: %d \n",len);
	for(i=0; i<19;i++){
	//asci=rad1[i];
	printf("%d \n" ,ut[i]);
	}	*/
}
