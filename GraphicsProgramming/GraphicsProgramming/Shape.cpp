#include "shape.h"
#include <vector>


extern float verts[] =
{ 
	//front
	-1.0, 1.0, 1.0,						// Vertex #0
	-1.0, -1.0, 1.0,					// Vertex #1
	1.0,  -1.0, 1.0,					// Vertex #2
	1.0,  1.0, 1.0,						// Vertex #3
	//back
	-1.0, 1.0, -1.0,					// Vertex #4
	-1.0, -1.0, -1.0,					// Vertex #5
	1.0,  -1.0, -1.0,					// Vertex #6
	1.0,  1.0, -1.0,					// Vertex #7
	//left
	-1.0, 1.0, 1.0,						// Vertex #8
	-1.0, -1.0, 1.0,					// Vertex #9
	-1.0, -1.0, -1.0,					// Vertex #10
	-1.0, 1.0, -1.0,					// Vertex #11
	//right
	1.0, 1.0, 1.0,						// Vertex #12
	1.0, -1.0, 1.0,						// Vertex #13
	1.0, -1.0, -1.0,					// Vertex #14
	1.0, 1.0, -1.0,						// Vertex #15
	//top
	-1.0, 1.0, 1.0,						// Vertex #16
	1.0,  1.0, 1.0,						// Vertex #17
	1.0,  1.0, -1.0,					// Vertex #18
	-1.0, 1.0, -1.0,					// Vertex #19
	//bottom
	-1.0, -1.0, 1.0,					// Vertex #20
	1.0,  -1.0, 1.0,					// Vertex #21
	1.0,  -1.0, -1.0,					// Vertex #22
	-1.0, -1.0, -1.0,					// Vertex #23
};

extern float norms[] = 
{ 
	//front
	0.0, 0.0, 1.0,						//0
	0.0, 0.0, 1.0,						//1
	0.0, 0.0, 1.0,						//2
	0.0, 0.0, 1.0,						//3
	//back
	0.0, 0.0, -1.0,						//4
	0.0, 0.0, -1.0,						//5
	0.0, 0.0, -1.0,						//6
	0.0, 0.0, -1.0,						//7
	//left
	-1.0, 0.0, 0,						//8
	-1.0, 0.0, 0,						//9
	-1.0, 0.0, 0,						//10
	-1.0, 0.0, 0,						//11
	//right
	1.0, 0.0, 0,						//12
	1.0, 0.0, 0,						//13
	1.0, 0.0, 0,						//14
	1.0, 0.0, 0,						//15
	//top
	0, 1.0, 0,							//16
	0, 1.0, 0,							//17
	0, 1.0, 0,							//18
	0, 1.0, 0,							//19
	//bottom
	0, -1.0, 0,							//20
	0, -1.0, 0,							//21
	0, -1.0, 0,							//22
	0, -1.0, 0,							//23
};


extern float texCoords[] = 
{ 
	0.0, 0.0, 							//0
	0.0, 1.0, 							//1
	1.0, 1.0, 							//2
	1.0, 0.0, 							//3

	0.0, 0.0, 							//4
	0.0, 1.0, 							//5
	1.0, 1.0, 							//6
	1.0, 0.0, 							//7

	0.0, 0.0, 							//8
	0.0, 1.0, 							//9
	1.0, 1.0, 							//10
	1.0, 0.0, 							//11

	0.0, 0.0, 							//12
	0.0, 1.0, 							//13
	1.0, 1.0, 							//14
	1.0, 0.0, 							//15

	0.0, 0.0, 							//16
	0.0, 1.0, 							//17
	1.0, 1.0, 							//18
	1.0, 0.0, 							//19

	0.0, 0.0, 							//20
	0.0, 1.0, 							//21
	1.0, 1.0, 							//22
	1.0, 0.0, 							//23
};

extern GLuint indices[] = 
{ 
	0,	1,	2,	3,						//0
	4,	5,	6,	7,						//0
	8,	9,	10,	11,						//0
	12,	13,	14,	15,						//0
	16,	17,	18,	19,						//0
	20,	21,	22,	23,						//0
};

void Shape::render1(GLuint texture)
{
	// add code to render the cube (above) using method 1
	// glArrayElement()

	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);

	glVertexPointer(3, GL_FLOAT, 0, verts);
	glNormalPointer(GL_FLOAT, 0, norms);
	glTexCoordPointer(2, GL_FLOAT, 0, texCoords);

	glBindTexture(GL_TEXTURE_2D, texture);

	glBegin(GL_QUADS);
		glArrayElement(0);
		glArrayElement(1);
		glArrayElement(2);
		glArrayElement(3);
	glEnd();


	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
}

void Shape::render2(GLuint texture)
{
	// add code to render the cube (above) using method 2
	// glDrawArrays()
	
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);

	glVertexPointer(3, GL_FLOAT, 0, verts);
	glNormalPointer(GL_FLOAT, 0, norms);
	glTexCoordPointer(2, GL_FLOAT, 0, texCoords);

	glBindTexture(GL_TEXTURE_2D, texture);

	//glBegin(GL_QUADS);
	glDrawArrays(GL_QUADS, 0, 4);
	//glEnd();


	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
}

void Shape::render3(GLuint texture)
{
	// add code to render the cube (above) using method 3
	// glDrawElements()

	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	//glEnableClientState(GL_INDEX_ARRAY);

	glVertexPointer(3, GL_FLOAT, 0, verts);
	//glIndexPointer(GL_INT, 0, indices);
	glNormalPointer(GL_FLOAT, 0, norms);
	glTexCoordPointer(2, GL_FLOAT, 0, texCoords);
	


	glBindTexture(GL_TEXTURE_2D, texture);

	//glBegin(GL_QUADS);
	glDrawElements(GL_QUADS, 24, GL_UNSIGNED_INT, indices);

	//glEnd();


	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	//glDisableClientState(GL_INDEX_ARRAY);
}