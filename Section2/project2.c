#include <stdio.h>

#define PI 3.14159265358979323846
#define FRAC (4.0f / 3.0f)

int main(void){
	float radius;
	printf("Sphere radius: ");
	scanf("%f", &radius);	

	printf("The volume of the sphere is %f.\n", (FRAC * PI * radius * radius * radius));
	
	return 0;
}
