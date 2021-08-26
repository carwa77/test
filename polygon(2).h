#include "vertex.h"
class Polygon {
	public:
		Polygon();
		Polygon (Vertex A[],int a);
		~Polygon();
		int numVertices();
		float area();
		int minx();
		int maxx();
		int miny();
		int maxy();
		void add(Vertex P);
	
	private:
		int horn;
		Vertex *TEST;
		Vertex *TEMP;
		float arean;
		
};
