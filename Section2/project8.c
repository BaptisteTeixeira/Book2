#include <stdio.h>

int main(void){
	float interest, payment, balance;

	printf("Enter amount of loan : ");
	scanf("%f", &balance);

	printf("Enter interest rate : ");
	scanf("%f", &interest);

	printf("Enter monthly payment : ");
	scanf("%f", &payment);
	
	balance = (balance - payment) + (balance * ((interest/100.0f)/12.0f));
	printf("Balance remaining after first payment : %.2f\n", balance);
	
	balance = (balance - payment) + (balance * ((interest/100.0f)/12.0f));
	printf("Balance remaining after second payment : %.2f\n", balance);
	
	balance = (balance - payment) + (balance * ((interest/100.0f)/12.0f));
	printf("Balance remaining after third payment : %.2f\n", balance);

	return 0;
}
