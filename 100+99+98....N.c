#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=100;i>=n;i--)
        s=s-i;
    prnitf("%d",s);
    getch();

}
