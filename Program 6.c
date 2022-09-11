//Write a program to check whather a given year is a leap Year or Not using Switch statement ...?

#include <stdio.h>
#include <conio.h>
int main()
{
    int N,year;
    while(1)
    {
    printf("\nEnter a valid case number\n");
    scanf("%d",&N);
    switch(N)
    {
    case 1:
        printf("Enter a number \n");
        scanf("%d",&year);
        if ( year % 400 == 0)
            printf("%d Leap Year\n", year);
            else
            printf("%d Leap is not Year\n", year);
            break;


    case 2:
        printf("Enter a number \n");
        scanf("%d",&year);
        if(year % 100 == 0)
            printf("%d Is not a Lear Year", year);
          break;

    case 3:
        printf("Enter a number \n");
        scanf("%d",&year);
        if (year % 4 == 0)
        printf("%d Is not a Lear Year", year);
        break;

    case 4:
        exit(0);

    default:
      printf("Invaild Input Case...\n Sorry User...");

    }
  }
}
