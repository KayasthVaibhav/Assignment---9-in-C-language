// Q.Write a menu driven program with the following options:

//a. Check whether a given set of three numbers are lengths of an isoceless triangle or not.?

//b. Check whether a given set of three number are lengths of sides of a right angled  triangle or not.?

//c. Check whether a given set of three number are equilateral triangle or not .?

//d. Exite ?

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b,c;
    while(1)
    {
        printf("\n1. Check whether a given set of three numbers are lengths of an isoceless triangle or not.?\n");

        printf("2. Check whether a given set of three number are lengths of sides of a right angled  triangle or not.?\n");

        printf("3. Check whether a given set of three number are equilateral triangle or not .?\n");

        printf("4. Exite ?\n");
        scanf("%d",&n);
        switch(n)
        {


        case 1:
            printf("Enter Three values  for check isosceless triangel or not");
            sc   anf("%d %d %d",&a,&b,&c);
            if(a==b ||b==c || c==a )
                printf("Triangle is isosceless.");
            else
                printf("Triangle is not isosceless.");
            break;

        case 2:
            printf("Enter Three values for check Right Angled triangel or not ");
            scanf("%d %d %d",&a,&b,&c);
            if(a+b==c)
                printf("Triangle is Right Angled Triangle.");
            else
                printf("Triangle is not Right Angled Triangle.");
            break;

        case 3:
            printf("Enter Three values for check  Equilateral triangel or not");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b && b==c && c==a )
                printf("Triangle is Equilateral.");
            else
                printf("Triangle is not Equilateral.");
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invaild Input Case...\n Sorry User...");


        }

    }
}
//Completed //
