//Q. Write a program which takes the day number of a week and displays a unique greeting message for the day. ?

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b;
    printf("Enter the Input Week Days of Number:");
    scanf("%d",&n);
    {
        switch(n)
        {
        case 1:
            printf("\n HAPPY MONDAY... \n GOOD MORNING...n ");
            printf("The moment you\n start valuing Yourself.\n The world will start\n valuing You.\n ");
            break;

        case 2:
            printf("\n HAPPY TUESDAY... \n GOOD MORNING...\n ");
            printf("Succes comes from,\n experiences \n Succes comes from,\n  bad experiences.\n ");
            break;

        case 3:
            printf("\n HAPPY WEDNESDAY... \n GOOD MORNING...\n ");
            printf("What people think\n about you is not  \n important. what you\n think about Yourself\n means everything.\n ");
            break;


        case 4:
            printf("\n HAPPY THURSDAY... \n GOOD MORNING...\n ");
            printf("Always remenber, You\n are bigger than your   \n problems.\n ");
            break;

        case 5:
            printf("\n HAPPY FRIDAY... \n GOOD MORNING...\n ");
            printf("You might have faild,\n but're not a failure\n untill you give up.\n");
            break;

        case 6:
            printf("\n HAPPY SATURDAY... \n GOOD MORNING...\n ");
            printf("Stop Criticing,\n yourself   for   your\n failures. yourself\n for Your Achievement.\n   ");
            break;

        case 7:
            printf("\n HAPPY SUNDAY...\n GOOD MORNING...\n \n Its Your day \n Full Enjoy And Fun.\n ");
            break;

        default:
            printf("Invaild Input Week Day Number\n SORRY USER.... ");


        }
    }
}
//Completed //
