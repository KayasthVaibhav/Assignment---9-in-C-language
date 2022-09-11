//Q. Program to Convert even number into  its upper nearest Odd number Switch Statement.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Even,Odd,a;
    printf("Select 1 For Run Case 1:\nSelect 2 For Run Case 2:\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Enter a Even Number");
        scanf("%d",&a);
        if (a%2==0)
        {
            printf("Given number is Even %d\n",a);
            Odd = a+1;
            printf("its upper nearest Odd number %d\n",Odd);
        }
        break;
    case 2:
        printf("Enter a Odd Number");
        scanf("%d",&a);
        if (a%2==0)
        {
            printf("Given number is Odd %d\n",a);
        }
        else
        {
            printf("Given number is Odd %d\n",a);
            Even = a-1;
            printf("its upper nearest Even number %d",Even);
        }
        break;

    case 3:
        exit(0);

    default:
        printf("User Input Case Wrong");
        return 0;

    }
}
//Given task Completed//
