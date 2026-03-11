#include "ProceduralShape.h"
#include <cmath> 
#include <vector>


void ProceduralShape::GenerateDisc(int segments, float radius)
{
	//float verts[] = {0,0,0,0,};
	//float verts[] = new float[static_cast<size_t>(segments) * 3]();
	float* verts = new float[segments];
	float norms[] = { 0, 0, 1};
	float texcoords[] = { 0.5, 0.5};

	float x = 0, y = 0, theta = 0;

	for (int i = 0; i < segments; i++)
	{
		theta = (2 * 3.14) / segments * i;
		x = radius * cos(theta);
		y = radius * sin(theta);

	}
}