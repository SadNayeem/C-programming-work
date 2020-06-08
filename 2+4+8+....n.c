#include <stdio.h>
#include <conio.h>
main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=2;i<=n;i=i*2)
       {
         s=s+i ;
       }
       printf("%d",s);
       getch();
}
