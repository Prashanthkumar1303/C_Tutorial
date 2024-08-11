//Fibonacci series in iteration:
#include <stdio.h>
int main()
{
    int t1=0;
    int t2=1;
    int next_term= t1+t2;
    int n;
    printf ("Please enter the number upto which you want to find the fibbonacci series.\n");
    scanf ("%d",&n);
    printf ("The fiboonacci series are %d,%d",t1,t2);
    for (int i=3;i<=n;i++)
    {
        printf (",%d",next_term);
        t1= t2;
        t2=next_term;
        next_term=t1+t2;
    }
  return 0; 
}                       

// Fibonacci series in Recursion:

// #include<stdio.h>
//     int fib(int n)
//     {
//         if (n<=1)
//         return n;
//         else 
//         return (fib(n-1)+fib(n-2));
//     }
//     int main()
//     {
//         int a;
//         printf ("Please enter the number upto which you want to find the fibonacci series\n");
//         scanf ("%d",&a);
//         printf ("the fibonnaci series upto %d is \n",a);
//         for (int i=0;i<=a;i++)
//         {
//             printf("%d ",fib(i));
//         }
//             return 0;
//     }

// Recursion is taking more time than iteration

