#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    for(;;)
    {
        printf("\n Enter a positive integer :");
        scanf("%d",&x);
        if(x<=0)
            continue;
        else
            break;
    }
    printf("\n You have entered %d",x);
}
