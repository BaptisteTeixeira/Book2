#include <stdio.h>

int main(void){
	int height = 8, length = 12, width = 10;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", (height * length * width));
	printf("Dimensional weigth (pounds): %d\n", ((height * length * width)+ 165) / 166);
	
	return 0;
}
