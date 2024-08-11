#include <stdio.h>

int main()
{
 int speed;   
 printf("enter the speed\n");
 scanf("%d", &speed);
 switch (speed)
 {
      case 40:
           printf("the speed is 40\n");
           break;
      case 60:
           printf("The speed is 60\n");
           break;
      case 80:
           printf("The speed is 80\n");
           break;

        default:
        printf("speed is not 40, 60 or 80\n");
        break;      

 }
 return 0;
}