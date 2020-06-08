#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    for(a=10;a<=50;a++)
    {if(a==15 || a==25)
        continue;
        printf("%d\n",a);}

    return 0;
}
