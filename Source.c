#include <stdio.h>
#include <math.h>

void main()
{
	float h = 100.;
	int rd = 30;
	float k = 0.5;
	printf("%.4f", h * ((1 / (sin(rd))) + ((1 - (k * (cos(rd)/sin(rd)))) / k)));
}