#include<stdio.h>
int main()
{
    int subject;
    printf("enter the subject\n",
           "1.mathsandscience" 
           "2.maths" 
           "3.science" );

    scanf("%d", &subject);
    printf("you have enter %d as subject\n", subject);

    if(subject==1)
    {
        printf("congrats you have won $45");
    }

    else if (subject==2)

    {
        printf("congrats you have won $15");

    }

    else if (subject==3)
    {
        printf("congrats you have won $15");
    }

    return 0;


}
