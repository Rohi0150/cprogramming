#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter Number : ");
    scanf("%d", &x);
    /*1. GET A NUMBER AND ADD 2 WITH THAT INPUT :45 , OUTPUT : 47
    y=x+2;
    printf("Result(add 2): %d",y);*/

    /*2. Get a number from the user and subract 5 from it and print the result
    y = x-5;
    printf("Result :%d",y);*/

    /*3. Get a number from the user & Multiply into 3
    y = x*3;
    printf("Result :%d",y);*/

    /*4.Get a number from the user & Divide it by 6
    y = x/6;
    printf("Result: %d",y);*/

    /*5. Get a number from the user &divide it by 8 and print the remainder
    y = x%8;
    printf("Result : %d ",y );*/

    /*6. Get the 2 digit from the user and print thr one's digit
    y = x%10;
    printf("Result : %d ",y );*/

    /*7. Get the 2 digit from the user and print thr ten's digit
    y = x/10;
    printf("Result : %d ", y);*/

    /*8. Get the three digit number from the user and print the one's digit
    y =x%10;
    printf("Result : %d ",y);*/
    /*9. Get the three digit number from the user and print the 100's digit
    y = x/100;
    printf("Result :%d ",y );*/

    /*10 . Get the three digit number from the user and print the 10's digit
    y = x%100;
    y=y/10;
    printf("Result :%d ",y );*/

    /*12. Get the three digit number from the user and print the sum of the digits
    int sum =0;
    Loop: y = x%10;
    x=x/10;
    sum = sum+y;
    if (x!=0){
        goto Loop ;
    }
    printf("%d",sum );*/
    /*13. Get a two digit number from the user and print reverse order
    y = x%10;
    x= x/10;
    printf("%d", y*10 + x*1);*/
    /*14.Get a three digit number from the user and print it in reverse order
    y = x%10;
    int z = x%100;
    z=z/10;
    x=x/100;
    printf("Result : %d ", y*100 + z*10 + x*1);*/

    /*15.get a four digit number from the user and only reverse the first two digits of the number
    y =x%10;
    int z=x%100;
    z=z/10;
    x=x/100;
    printf("%d%d%d",x,y,z);*/

    /*17.Get a two digit number from th euser and make the one's digit to zero
    x=x/10;
    x=x*10;
    printf("%d",x);*/

    /*18. Get a two digit number from th euser and make the ten's digit to one

    x=x%10;
    x=10+x;
    printf("%d",x);*/

    /*19. Get a 3 digit number from the user and make the one's digit 2 and then print it
    x=x/10;
    x=x*10 +2;
    printf("%d",x);*/

    /*20.Get  a number from the user and subract 5 if it is odd
    x= x -5*(x&1);
    printf("%d",x);*/

    /*21. Get the number from the user and subract 5 from the number if the number's 10,s position is odd
    y = x/10;
    (y%2==1)? x=x-5: x;
    printf("%d",x);*/

    /*22.Get a two digit number form the user and subract 5 from that number if the sum of the digit is odd then print the result
    S:int z= x;
    y = x%10;
    x=x/10;
    ((x+y)%2==1)? z=z-5:z;
    printf("%d",z);*/

    /*23.Get a three-digit number from the user and subtract five from that number if one's digit number and 100's digit number are odd, then print the result. Do not use “if”.
    y = x%10;
    int z= x/100;
    (y%2==1&&z%2==1)?x=x-5:x;
    printf("%d",x);*/

    /*24.Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum,
    otherwise add the digits of the sum, and print the sum. Note: The result should always be a single digit only
    int sum =0;
    Q:y = x%10;
    x=x/10;
    sum = sum +y;
    if (x!=0)goto Q;
    else if (sum>=10) {
        x=sum;
        sum =0 ;
        goto Q;

    }
    else printf("%d",sum);*/

    /*20. Get a 3 digit number from the user and make ten's digit as 0
    int z = x%10;
    y= x/100;
    printf("%d0%d",y,z);*/
    /*16.Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
    int z =x%1000;
    z=z/100;
    y = x/1000;
    x=x%100;
    printf("%d%d%d",z,y,x);*/
    /*11. Get the two digit number from the user and return the sum of the digits
    y=x/10;
    x=x%10;
    printf("%d",x+y);*/
}