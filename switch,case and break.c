#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("You have entered value 1");
         break;
    case 2:
        printf("You have entered value 2");
         break;
    case 3:
        printf("You have entered value 3");
        break;
         case 4:
        printf("You have entered value 4");
        break;
    default:
        printf("You have entered another value");
    }
    return 0;
    getch();
}
