#include<stdio.h>

int main ()
{
    /*int x;
    x=1;
    loop: if(x < 6)
    {
        printf("%d\n",x);
        x++;
        goto loop;
    }*/



    /*int x;
    x=5;
    loop: if(x < 6)
    {
        printf("%d\n",x);
        x--;
        if (x==0) goto end;
        goto loop;
    }
    end:*/

    /*int x;
    x=0;
    int sum=0;
    loop: if(x < 6)
    {
        sum = sum+ x;
        x++;
        goto loop;
    }
    printf("%d",sum);*/

   /* int x=5;
    int sum =0;
    loop: if(x < 6)
    {
        sum = sum + x+1;
        x--;
        if (x==-1) goto end;
        goto loop;
    }
    end: printf("%d",sum);
    */

    /*int x;
    x=1;
    loop: if(x < 10)
    {
        
        printf("%d\n",x);
        x+=2;
        goto loop;
    }*/

    /*int x;
    x=11;
    loop: if(x < 20 && x>10)
    {
       printf("%d\n",x);
       x+=2;
        goto loop;
    }*/

    /*int x,y,z;
    x=11;
    loop: if(x < 99 && x>10)
    {
        y=x%10;
        z=x/10;
        if (z+y == 7 && x%2!=0)
        {
            printf("%d%d",z,y);
        }
        x++;
        goto loop;
    }*/

    /*int x,y,z;
    x=21;
    loop: if(x <= 90 && x>20)
    {
        y = x/10;
        z = x%10;

        if (y%2==0 && z%2==0 && y + z ==6 ) printf("%d\n",x);
        x++;
        goto loop;
    }*/

    /*int x,sum =0;
    x=71;
    loop: if(x < 80 && x>70)
    {
        sum = sum + x;

        x+=2;
        goto loop;
    }
    printf("%d",sum);*/

    /*int x,count =0;
    scanf("%d",&x);
    loop: if(x>0)
    {
        x=x/10;
        count++;
        
        goto loop;
    }
    printf("%d",count);
    */


    /*int x,y,sum =0;
    scanf("%d",&x);
    loop: if(x>0)
    {
        y=x%10;
        x=x/10;
        sum = sum + y;
        goto loop;
    }
    printf("%d",sum);*/


    /*14.Write a program to get a number from user and interchange the first and last digits and print the result.
    int x,y,z=1,a,b=1;
    scanf("%d",&x);
    y =x;
    a=x%10;
    loop: if(x>=10)
    {
        b = b*10;
        x = x/10;
        goto loop;
    }
    int g = (y%b)/10;
    printf("%d",a*b+g*10+x);*/


    /*Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)
    int n ,c=1;
    scanf("%d",&n);
    int m =n ;
    loop: if(n>=10)
    {
        n=n/10;
        c= c*10;
        goto loop;
    }
    if(m%2==0) printf("%d",m);
    else printf("%d",(n-1)*c+m%c);  
    */

   /* int n ;
    scanf("%d",&n);
    int m =2,c=0;
    loop : if (n%m==0){
        c=1;
        goto X;
    }
    if(n!=m+1){m++;goto loop;}
    else goto X;
    X:
    if(c==1){
        printf("Not prime");
    }
    else {
        printf("Prime");
    }*/

    
}