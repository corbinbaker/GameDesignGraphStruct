#pragma once
class driver
{
public:
	driver();
	~driver();
};

/*
TEST DRIVER
INIT – Reset the graph
ADDV – Request a string, then add that string as a vertex.
ADDE – Request the name of two vertices, then a weight between the vertices. Creates an edge based on this info.
PRINT – Prints each vertex in the graph, along with all edges and weights associated with the vertex.
The output might look like…
Atlanta; Adjacent: Houston (800), Washington (600)
TEST1 – Initializes the graph. Then insert the vertices and edges defined for the example on slide 6 in lecture 24 (Game Map and Graphs).
TEST2 (Bonus Points) - Initializes the graph. Then insert the vertices and edges defined for the example on slide 3 (Movealot) in lecture 24.
QUIT – Quit the test program.*/
