#include "ProceduralShape.h"
#include <cmath> 
#include <vector>


void ProceduralShape::GenerateDisc(int segments, float radius)
{

	float x = 0, y = 0, theta = 0;

	float* verts = new float[segments * 3 + 3];		//3 per segment + center
	float* norms = new float[segments * 3 + 3];		//3 per segment + center
	float* texcoords = new float[segments * 2 + 2];	//2 per segment	+ center

	//declare center
	//do the for for everything around except the last
	//set the last to the starting line so there aren't missing slices


	for (int i = 0; i < segments; i++)
	{
		theta = (2 * 3.14) / segments * i;
		x = radius * cos(theta);
		y = radius * sin(theta);

	}
}