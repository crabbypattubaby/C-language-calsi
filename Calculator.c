#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2;

    printf("Hello GitHub, this is my first time using it!!");
    printf("\nThis is a calculator app, plsease enther your Number:\n");
    scanf("%f", &num1);
    printf("\nPlease enter you second number:\n");
    scanf("%f", &num2);
    printf("\nNow, you need to tell me what you want to do with these numbers. Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for power, 6 for square root:\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("The sum of the two numbers is: %f", num1 + num2);
        break;
    case 2:
        printf("The difference of the two numbers is: %f", num1 - num2);
        break;
    case 3:
        printf("The product of the two numbers is: %f", num1 * num2);
        break;
    case 4:
        printf("The division of the two numbers is: %f", num1 / num2);
        break;
    case 5:
        printf("The power of the two numbers is: %f", pow(num1, num2));
        break;
    case 6:
        printf("The square root of the first number is: %f", sqrt(num1));
        break;
    default:
        printf("Invalid choice");
        break;
    };
    

};