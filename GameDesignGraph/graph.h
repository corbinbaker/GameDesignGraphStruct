#pragma once
#include <vector>
#include <queue>
#include <map>
using namespace std;


//name = name of the vertex
//costs = a vector of vertices and the costs to travel to them
struct Vertex {
	string name;
	map<Vertex, int> costs;
	vector<Vertex> adj;

	Vertex(string n)
	{
		name = n;
		costs = map<Vertex, int>();
		adj = vector<Vertex>();
	}

	Vertex()
	{
		
	}

	bool operator== (const Vertex&c) const {
		if (this->name == c.name)
			return true;
		else
			return false;
	}
};


//void makeEmpty() � Initializes the graph to an empty state.
void makeEmpty();


//void addVertex(string vertexname) � Add a vertex to the graph.
void addVertex(string vertexname);


//bool addEdge(string fromVertex, string toVertex, int cost) - Adds an edge from fromVertex to toVertex with a weight of cost.  Returns false if either vertex not found.
bool addEdge(string fromVertex, string toVertex, int cost);


//int getWeight( string fromVertex, string toVertex ) � Returns the cost to move from fromVertex to adjacent vertex toVertex. If the two vertices are not adjacent or not found, returns -1.
int getWeight(string fromVertex, string toVertex);


//bool getAdjacent( string fromVertex, queue vertexQue) � given the vertex fromVertex, return a queue containing the adjacent vertices.  Returns false if vertex not found.
bool getAdjacent(string fromVertex, queue<string> vertexQue);


