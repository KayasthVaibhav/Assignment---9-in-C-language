// Q. Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the Month Number:");
    scanf("%d",&n);
    {
        switch(n)
        {


        case 1:
            printf("January  is 31 Days. ");
            break;

        case 2:
            printf("Febery is 28 Days. ");
            break;

        case 3:
            printf("March is 31 Days. ");
            break;

        case 4:
            printf("April  is 30 Days. ");
            break;

        case 5:
            printf("May  is 31 Days. ");
            break;

        case 6:
            printf("June is 30 Days. ");
            break;

        case 7:
            printf("Junt  is 31 Days. ");
            break;

        case 8:
            printf("August  is 31 Days. ");
            break;

        case 9:
            printf("September is 30 Days. ");
            break;

        case 10:
            printf("October is 31 Days. ");
            break;

        case 11:
            printf("Novemebr  is 30 Days. ");
            break;

        case 12:
            printf("December  is 31 Days. ");
            break;

        default:
            printf("Invaild Month Number");


        }
    }
}
//Completed //
