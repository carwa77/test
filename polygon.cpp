#include "polygon.h"
#include "vertex.h"
#include <iostream>
#include <cmath>

using namespace std;


//Konstruktorer
Polygon::Polygon (){
	horn=0;
	IN=0;
}

Polygon::Polygon (Vertex B[],int a){
	TEST=new Vertex[a];
	horn=a;
	for(int i=0;i<a;i++){
	
		TEST[i].xpos=B[i].xpos;
		TEST[i].ypos=B[i].ypos;
	}
	
}

//Destruktor
Polygon::~Polygon (){

}


//Metoder

int Polygon::numVertices (){
	return horn;
}

int Polygon::minx(){
	int minst=100000;
	
	for(int i=0;i<horn;i++){
	
		if(TEST[i].xpos<minst)
		{
		minst=TEST[i].xpos;
		}
	}
	return minst;
}

int Polygon::maxx(){
	int storst =-100000;
	
	for(int i=0;i<horn;i++){
	
		if(TEST[i].xpos>storst)
		{
		storst=TEST[i].xpos;
		}
	}
	return storst;
	
}

int Polygon::miny(){

	int minst=100000;
	
	for(int i=0;i<horn;i++){
	
		if(TEST[i].ypos<minst){
		
		minst=TEST[i].ypos;
		}
	}
	return minst;
}

int Polygon::maxy(){

	int storst =-100000;
	
	for(int i=0;i<horn;i++){
	
		if(TEST[i].ypos>storst)
		{
		storst=TEST[i].ypos;
		}
	}
	return storst;
	
}

void Polygon::add(Vertex P){
	Vertex *TEMP=0;
	TEMP = new Vertex[horn+1];
	for (int k=0;k<horn;++k){
		TEMP[k]=IN[k];
	}
	
	TEMP[horn]=P;
	IN=TEMP;

	/*if (horn ==0){
	TEST = new Vertex[horn+1];
	TEST[horn].xpos=P.xpos;
	TEST[horn].ypos=P.ypos;
	}
	else{
		TEMP= new Vertex[horn];
		for (int k=0;k<horn;k++){
		
			TEMP[k].xpos=TEST[k].xpos;
			TEMP[k].ypos=TEST[k].ypos;
		}
		delete []TEST;
		TEST=new Vertex[horn+1];
		for (int j=0; j<horn+1;j++){
		
			TEST[j].xpos=TEMP[j].xpos;
			TEST[j].ypos=TEMP[j].ypos;
		}
		delete []TEMP;
		TEST[horn].xpos=P.xpos;
		TEST[horn].ypos=P.ypos;
		
	}*/
	horn++;
}


float Polygon::area(){
	arean=0;
	for(int i=0;i<horn-1;i++){
	
		arean += (TEST[i].xpos*TEST[i+1].ypos-TEST[i+1].xpos*TEST[i].ypos)/2;
	}
	
	arean += (TEST[0].xpos*TEST[horn-1].ypos-TEST[horn-1].xpos*TEST[0].ypos)/2;
	
	return abs(arean);
	

}
