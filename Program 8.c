//Q. Program to convert a positive number into a negative number and negative
//number into a postive number using a switch statement.

#include<stdio.h>
#include<conio.h>

int main()
{
    int N,number;
    printf("select 1, Positive Number to negative number :\n");
    printf("select 2, Negative Number to Positive number :\n");
    scanf("%d",&N);

    switch(N)
    {

    case 1:
        printf("Enter a Positive Number:\n");
        scanf("%d",&number);
        printf("This is orginal number %d\n",number);
        number = number*(-1);
        printf("This is number of Postive to converted into negative Number %d",number);
        break;


    case 2:
        printf("Enter a negative Number:\n");
        scanf("%d",&number);
        printf("This is orginal number %d\n",number);
        number = number*(-1);
        printf("This is number of converted Negative to Postive Number %d",number);
        break;


    case 3:
        exit(0);


    default:
        printf("User input wrong case");

    }
    return 0;
}

//Given task is Successfully Completed//
