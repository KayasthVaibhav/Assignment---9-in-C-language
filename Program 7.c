//Q. //Write a program to take the value from the user as input electricity unity charges and calculate total electricty
// bill according to the given conditon . using the Switch statement ...?

// for the first 50 units Rs. 0.50/unit
// for the next 100 units Rs. 0.75/unit
// for the next 100 units Rs. 1.20/unit
// for the above 250 units Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include <stdio.h>
#include <conio.h>
int main()
{
    int N,a1,a2,b;
    float a,a3,a4,a5,a6,F,E,c,d;
   // while(1)
    //{
        printf("\nEnter a valid case number\n");
        scanf("%d",&N);
        switch(N)
        {
        case 1:
            printf("How much walts Acquivment Are you using ");
            scanf("%d",&a1);
            printf("How much hours this Acquivment Are you using ");
            scanf("%d",&a2);
            a3 = a1*a2;
            printf("Total Walt's this Acquivment Conjumed is %.2f wh/day",a3);
            a4 = a3/1000;
            printf("\nTotal this Acquivment Conjumed  unit's is %.2f in one day wh/day",a4);
            //printf("Enter total number of units");
            //scanf("%f",&a4);
            printf("\nEnter the total number of days\n");
            scanf("%f",&a);
            a5 = a4*a;
            printf("\nTotal this Acquivment Conjumed Given total days unit's is %.2f in wh/day\n",a5);

            printf("\nEnter the Price's of per Unit \n");
            scanf("%f",&c);
           // printf("\nTotal this Acquivment Conjumed Given total days unit's is %.2f in wh/day\n",a5);
            a6=a5*c;
            printf("\nTotal electricity bill according to the given condition is  Rs. %.2f in One month. \n",a6);

             E = 20*a6/100;
            printf("\nSome given condition is And + Additional Charges Rs.  %.2f in %.2f Days. \n",E,a);
             F = a6+E;
            printf("\n Total electricity bill according to the given condition is And + Additional Charges Rs.  %.2f in %.2f Days. \n",F,a);


           /* {
            if(a5<=50)
            {
            d=a*b*c;
            printf("\nTotal electricity bill according to the given condition is  Rs. %f in %d Days. \n",d,b);
             E = 20*d/100;
            printf("\nSome given condition is And + Additional Charges Rs.  %d in %d Days. \n",E,b);
             F = d+E;
            printf("\n Total electricity bill according to the given condition is And + Additional Charges Rs.  %f in %d Days. \n",F,b);

            }
            else
                printf("User input units is not valid ");
            }*/
            break;
/*

         case 2:
            printf("Enter a first 250 units for \n Enter the total number of days \n Enter the Price's of per Unit \n");
            scanf("%d %d %f",&a,&b,&c);
            {
            if(a>=250)
            {
            d=a*b*c;
            printf("\nTotal electricity bill according to the given condition is  Rs. %f in %d Days. \n",d,b);
             E = 20*d/100;
            printf("\nSome given condition is And + Additional Charges Rs.  %d in %d Days. \n",E,b);
             F = d+E;
            printf("\n Total electricity bill according to the given condition is And + Additional Charges Rs.  %f in %d Days. \n",F,b);

            }
            else
                printf("User input units is not valid ");
            }
            break;

         case 3:
            printf("Enter a first 100 units for \n Enter the total number of days \n Enter the Price's of per Unit \n");
            scanf("%d %d %f",&a,&b,&c);
            {

           if(a<=100)
            {
            d=a*b*c;
            printf("\nTotal electricity bill according to the given condition is  Rs. %f in %d Days. \n",d,b);
             E = 20*d/100;
            printf("\nSome given condition is And + Additional Charges Rs.  %d in %d Days. \n",E,b);
             F = d+E;
            printf("\n Total electricity bill according to the given condition is And + Additional Charges Rs.  %f in %d Days. \n",F,b);

            }
            else
                printf("User input units is not valid ");
            }
            break;

         case 4:
            printf("Enter a first above 250 units for \n Enter the total number of days \n Enter the Price's of per Unit \n");
            scanf("%d %d %f",&a,&b,&c);
            {

            if(a>=250)
            {
            d=a*b*c;
            printf("\nTotal electricity bill according to the given condition is  Rs. %f in %d Days. \n",d,b);
             E = 20*d/100;
            printf("\nSome given condition is And + Additional Charges Rs.  %d in %d Days. \n",E,b);
             F = d+E;
            printf("\n Total electricity bill according to the given condition is And + Additional Charges Rs.  %f in %d Days. \n",F,b);

            }
            else
                printf("User input units is not valid ");
            }
            break;

*/
        case 10:
            exit(0);

        default:
            printf("Invaild Input Case...\n Sorry User...");

        }
  //  }
}
//Compeleted//
// may be Uncompleted this program because of according to the Given questions Condition's//
