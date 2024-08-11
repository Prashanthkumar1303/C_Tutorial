#include <stdio.h>

int main()
{
   int choice;
   double value;

    printf("Unit Conversion Menu:\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Inches to Feet\n");
    printf("3. Centimeters to Inches\n");
    printf("4. Pounds to Kilograms\n");
    printf("5. Inches to Meters\n");
    printf("Enter your choice (1-5):\n ");
    scanf("%d", &choice);

    printf("Enter the value to convert: ");
    scanf("%lf", &value);
 
    switch (choice)
    {
    case 1:
        printf("%.2lf kms is equal to %.2lf miles.\n", value, value* 0.621371);
        break;
    case 2:
        printf("%.2lf Inches is equal to %.2lf Feet.\n", value, value* 12);
        break;
    case 3:
        printf("%.2lf Centimeters is equal to %.2lf Inches.\n", value, value*0.393701);
        break;
    case 4:
        printf("%.2lf pounds is equal to %.2lf Kilograms.\n", value, value*0.453592);
        break;
    case 5:
        printf("%.2lf Inches is equal to %.2lf Meters.\n", value, value*0.0254);
        break;

    default:
        printf("You have entered an invalid choice. please choose a valid choice");
        break;
    }
  return 0;4
}