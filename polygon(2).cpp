//-----------------------------------------------------------------------
// File:    polygon.cpp
// Summary: Implementerar metoderna till class Polygon
// Version: 1.0
// Owner:  Carl-Henrik Wallin	 
//-----------------------------------------------------------------------
// Log: 20120306 File created.
//	
//					 
//					
//-----------------------------------------------------------------------


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
	IN=new Vertex[a];
	horn=a;
	for(int i=0;i<a;i++){
		IN[i]=B[i];
		//IN[i].xpos=B[i].xpos;
		//IN[i].ypos=B[i].ypos;
	}
	
}

//Destruktor
Polygon::~Polygon (){
	delete []IN;
}


//Metoder

int Polygon::numVertices (){
	return horn;
}

int Polygon::minx(){
	int minst=100000;
	
	for(int i=0;i<horn;i++){
	
		if(IN[i].xposen()<minst)
		{
		minst=IN[i].xposen();
		}
	}
	return minst;
}

int Polygon::maxx(){
	int storst =-100000;
	
	for(int i=0;i<horn;i++){
	
		if(IN[i].xposen()>storst)
		{
		storst=IN[i].xposen();
		}
	}
	return storst;
	
}

int Polygon::miny(){

	int minst=100000;
	
	for(int i=0;i<horn;i++){
	
		if(IN[i].yposen()<minst){
		
		minst=IN[i].yposen();
		}
	}
	return minst;
}

int Polygon::maxy(){

	int storst =-100000;
	
	for(int i=0;i<horn;i++){
	
		if(IN[i].yposen()>storst)
		{
		storst=IN[i].yposen();
		}
	}
	return storst;
	
}
// Lägger till en Vertex till en befintlig array, alt skapar en om det inte finns någon.
void Polygon::add(Vertex P){
	
	Vertex *TEMP=0;
	//Provar på om pekaren är noll för att veta om minne finns allokerat.
	if (IN==0){
		IN = new Vertex[horn+1];
	}
	
	TEMP= new Vertex[horn+1];
	for (int k=0;k<horn;k++){
			TEMP[k]=IN[k];	
		}
	TEMP[horn]=P;
	delete []IN;
	
	IN=TEMP;
	horn++;
}

//Beräknar Arean
float Polygon::area(){

	float arean=0;
	for(int i=0;i<horn-1;i++){
	
		arean += (IN[i].xposen()*IN[i+1].yposen()-IN[i+1].xposen()*IN[i].yposen())/2;
	}
	
	arean += (IN[0].xposen()*IN[horn-1].yposen()-IN[horn-1].xposen()*IN[0].yposen())/2;
	
	return abs(arean);
	

}