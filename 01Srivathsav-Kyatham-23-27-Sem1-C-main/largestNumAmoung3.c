#include <stdio.h>
int main() {
    double num1, num2, num3;
    printf("Enter 1st number: ");
	scanf("%lf", &num1); 
    printf("Enter 2st number: ");
    scanf("%lf", &num2);
    printf("Enter 3rd number: ");
	scanf("%lf", &num3); 
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2f is the largest number \n.", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%.2f is the largest number. \n", num2);
    }
    else {
        printf("%.2f is the largest number. \n", num3);
    }
    return 0;
}