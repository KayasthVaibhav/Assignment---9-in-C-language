// Q.Write a menu driven program with the following options:
//a.Addition
//b.Subtraction
//c.Multiplication
//d.Division
//e.Exit     ??

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b;
    printf("Enter the Month Number:");
    scanf("%d",&n);
    {
        switch(n)
        {


        case 1:
            printf("Enter Two values ");
            scanf("%d %d",&a,&b);
            printf("Sum of Two values is %d",a+b);
            break;

        case 2:
            printf("Enter Two values ");
            scanf("%d %d",&a,&b);
            printf("Subtraction of Two values is %d",a-b);
            break;

        case 3:
            printf("Enter Two values ");
            scanf("%d %d",&a,&b);
            printf("Product of Two values is %d",a*b);
            break;

        case 4:
            printf("Enter Two values ");
            scanf("%d %d",&a,&b);
            printf("Division of Two values is %d",a/b);
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("Invaild Input Case");


        }
    }
}
//Completed //
