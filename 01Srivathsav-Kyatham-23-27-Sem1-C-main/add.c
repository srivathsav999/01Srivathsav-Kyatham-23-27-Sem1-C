#include <stdio.h> 
int main() 
{ 
	int num1, num2, sum = 0; 
	printf("Enter 1st number: ");
	scanf("%d", &num1); 
    printf("Enter 2st number: ");
    scanf("%d", &num2); 
	sum = num1 + num2; 
	printf("Sum of num1 and num2 is: %d \n", sum); 
	return 0; 
}