//Q. C Program to find all roots of a Quadratic equation using switch case.

#include<stdio.h>
#include<conio.h>

int main()
{
    int N,a,b,c,Disc;
    printf("Select 1 For Run Case 1:\nSelect 2 For Run Case 2:\n");
    scanf("%d",&N);
    switch(N)
    {
    case 1:
        printf("Enter Values of A and B Or C :\n");
        scanf("%d%d%d",&a,&b,&c);

        Disc = b*b - 4*a*c;

        if (Disc > 0)
        {
            printf("Real & distinct roots");
        }

        else
        {
            printf("Not Real & distinct roots");
        }
        break;


    case 2:

        printf("Enter Values of A and B Or C :\n");
        scanf("%d%d%d",&a,&b,&c);

        Disc = b*b - 4*a*c;
        if( Disc < 0)
        {
            printf("Imaginary roots");
        }
        else
        {

            printf(" Real & Equal ");

        }
        break;
    case 3:
        exit(0);

    default:
        printf("User Input Case Wrong");

    }
    return 0;
}
//completed//
