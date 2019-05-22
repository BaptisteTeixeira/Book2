#include <stdio.h>

int main(void){
	int amount, div;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	div =(int) amount/20;
	amount = amount - (div * 20);
	printf("$20 bills: %d\n", div);
	
	div =(int) amount/10;
	amount = amount - (div * 10);	
	printf("$10 bills: %d\n", div);

	div = (int) amount/5;
	amount = amount - (div * 5);
	printf(" $5 bills: %d\n", div);

	div = (int) amount/1;
	printf(" $1 bills: %d\n", div);

	return 0;
}
