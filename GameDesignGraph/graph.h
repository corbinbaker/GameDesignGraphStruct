#pragma once
class graph
{
public:
	graph();
	~graph();
};

/*
GRAPH - strings for the vertices and ints for the weights
void makeEmpty() – Initializes the graph to an empty state.
void addVertex(string vertexname) – Add a vertex to the graph.
bool addEdge(string fromVertex, string toVertex, int cost) - Adds an edge from fromVertex to toVertex with a weight of cost.  Returns false if either vertex not found.
int getWeight( string fromVertex, string toVertex ) – Returns the cost to move from fromVertex to adjacent vertex toVertex. If the two vertices are not adjacent or not found, returns -1.
bool getAdjacent( string fromVertex, queue vertexQue) – given the vertex fromVertex, return a queue containing the adjacent vertices.  Returns false if vertex not found.*/

