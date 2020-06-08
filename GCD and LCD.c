#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,num1,num2,temp,gcd,lcm;
    printf("enter first");
    scanf("%d",&num1);
    printf("\nenter second");
    scanf("%d",&num2);
    a=num1;
    b=num2;
    for(;b>0;)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=(num1*num2)/gcd;
    printf("\nlest common multiple of%d and %d=%d=%n",num1,num2,lcm);
    getch();
}
