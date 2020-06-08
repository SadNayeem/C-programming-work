#include<stdio.h>
#include<conio.h>
main()
{
    int i,f=1,n;
    printf("Give a number and check it's factorial..You enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
  printf("%d",f);
  getch();

}


