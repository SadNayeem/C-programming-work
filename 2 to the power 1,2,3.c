#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int n,i;
    long int s=0;
    scanf("%d",n);
    for(i=1;i<=n;i++)
    s=s+pow(2,i);
    printf("%ld",s);
    getch();

}
