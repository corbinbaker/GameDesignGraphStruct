#include "graph.h"

/*//name = name of the vertex
//costs = a vector of vertices and the costs to travel to them
struct Vertex {
	string name;
	vector<Vertex, int> costs;
};
*/

//GRAPH - strings for the vertices and ints for the weights
vector<Vertex> vertices = vector<Vertex>();

//void makeEmpty() – Initializes the graph to an empty state.
void makeEmpty() {
	vertices.clear();
}


//void addVertex(string vertexname) – Add a vertex to the graph.
void addVertex(string vertexname) {
	Vertex* v = new Vertex(vertexname);
	vertices.push_back(*v);
}


//bool addEdge(string fromVertex, string toVertex, int cost) - Adds an edge from fromVertex to toVertex with a weight of cost.  Returns false if either vertex not found.
bool addEdge(Vertex fromVertex, Vertex toVertex, int cost) {
	Vertex v1;
	Vertex v2;

	for (Vertex v : vertices) {
		if (v == fromVertex)
		{
			v1 = v;
		}

		if (v == toVertex)
		{
			v2 = v;
		}
	}

	if (v1.name.empty() || v2.name.empty())
	{
		return false;
	}

	else
	{
		//inserts cost values for both vertices
		v1.costs.insert(pair<Vertex,int>(v2, cost));
		v2.costs.insert(pair<Vertex,int>(v1, cost));
	}
}


//int getWeight( string fromVertex, string toVertex ) – Returns the cost to move from fromVertex to adjacent vertex toVertex. If the two vertices are not adjacent or not found, returns -1.
int getWeight(Vertex fromVertex, Vertex toVertex) {
	map<Vertex, int>::iterator it;

	for (it = fromVertex.costs.begin(); it != fromVertex.costs.end(); ++it)
	{
		if ((it)->first.name == fromVertex.name)
		{
			
		}

	}
}


//bool getAdjacent( string fromVertex, queue vertexQue) – given the vertex fromVertex, return a queue containing the adjacent vertices.  Returns false if vertex not found.
bool getAdjacent(Vertex fromVertex, queue<Vertex> vertexQue) {

}