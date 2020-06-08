#include<stdio.h>
#include<conio.h>
main()
{
    printf("How many number?");
    int s[10],n,i,max;
    scanf("%d",&n);
    printf("Enter %d integer number \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    max=s[0];
    for(i=1;i<n;i++)
   {
       if(s[i]>max)
       max=s[i];
       else
        max=max;
   }
   printf("The maximum number is:%d",max);
   getch();

}
