#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+pow(-1,i+1)*i;
        printf("%d",s);
        getch();
}
