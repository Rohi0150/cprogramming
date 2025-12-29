#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter Number : ");
    scanf("%d",&x);

    /*1.Get a number from the user and check if the number equals 50. If yes, the print “Success”, otherwise print “Failure”.
    if(x==50)
    printf("Success");
    else printf("Failure");*/

    /*2.Get a number from the user and check if the number not equals 50. If yes, the print “Success”, otherwise print “Failure”.
    if(x!=50) printf("Success");
    else printf("Failure");*/

    /*3.Get a number from the user and check if the number is less than 50. If yes, then print Success; otherwise, print Failure.
    if (x<50) printf("Success");
    else printf("Failure");*/

    /*4.Get a number from the user and check if the number is greater than 50. If yes, then print Success; otherwise, print Failure.
    if (x>50) printf("Success");
    else printf("Failure ");*/

    /*5.Get a number from the user and check if the number is less than or equal to 50. If yes, then print Success; otherwise, print Failure.
    if (x<=50) printf("Success");
    else printf("Failure");*/

    /*6.Get a number from the user and check if the number is greater than or equal to 50. If yes, then print Success; otherwise, print Failure.
    if (x>=50) printf("Success");
    else printf("Failure ");*/

    /*7.Get a two-digit number from the user and check if the digit 0 and digit 1 are identical. If yes, print “Success”; otherwise, print “Failure”.
    y = x/10;
    x=x %10;
    if(x==y) printf("Success");
    else printf("Failure");*/

    /*8.Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical. If yes, print “Success”; otherwise, print “Failure”.
    y = x/10;
    x=x %10;
    if(x==y) printf("Failure");
    else printf("Success");*/
    /*9.Get a two-digit number from the user and check if the digit 0 is less than the digit 1. If yes, print “Success”; otherwise, print “Failure”.
    y = x/10;
    x=x%10;
    if(x<y) printf("Success");
    else printf("Failure");*/
    
    /*10.Get a two-digit number from the user and check if the digit 0 is greater than the digit 1. If yes, print “Success”; otherwise, print “Failure”.
    y = x/10;
    x=x%10;
    if(x >y) printf("Success");
    else printf("Failure");*/

    /*11.Get a two-digit number from the user and check if the digit 1 is less than or equal to digit 0. If yes, print “Success”; otherwise, print “Failure”.
    y = x/10;
    x=x%10;
    if(y<=x) printf("Success");
    else printf("Failure");*/

    /*12.Get a two-digit number from the user and check if the digit 1 is greater than or equal to digit 0. If yes, print “Success”; otherwise, print “Failure”.
    y = x/10;
    x=x%10;
    if (y>=x) printf("Success");
    else printf("Failure");*/

    /*13.Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print “Success”; otherwise, print “Failure”.
    y = x%10;
    int z = x%100;
    z=z/10;
    if (z==y) printf("Success");
    else printf("Failure");*/
    
    /*14.Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same. If yes, print “Success”; otherwise, print “Failure”.
    y = x%100;
    x= x/100;
    if (x==y)printf("Sucess");
    else printf("Failure ");*/
}