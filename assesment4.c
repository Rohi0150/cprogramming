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

    int x,y, count = 1 ;
    scanf("%d",&x);
    loop: if(x>0)
    {
        
        goto loop;
    }
    

}