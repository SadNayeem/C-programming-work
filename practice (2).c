#include<stdio.h>
#include<conio.h>
main()
{
    int a, b ,c ;
    printf("tin ti sonkha er moddhe boro konta");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("%d",a);
    else if(b>a&&b>c)
    {printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }

    int w,e,r ;
    printf("tin ti sonkha er moddhe choto konta");
    scanf("%d%d%d",&w,&e,&r);
    if (w<e&&w<r)
    {printf("%d",w);}
    else if(e<w&&e<r)
        {printf("%d",e);}
        else
        {
            printf("%d,r");

        }
   int z,x,s;
   printf("dui ti songkha er jog fol");
   scanf("%d%d",&z,&x);
   s=z+x;
   printf("%d",s);

   int d,f,g;
   printf("duiti songkhar biyog fol");
   scanf("%d%d",&d,&f);
   g=f-d;
   printf("%d",g);



        getch();
}
