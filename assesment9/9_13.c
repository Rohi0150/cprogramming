/*Get multiple numbers from the user and store them in an array. 
Stop getting numbers when the number is 0.
If 4 numbers are entered and the first and last numbers are equal, print “Success” else “Failure”.*/
#include<stdio.h>
int main(){
    int a[100];
    int n=0;
    loop:
     scanf("%d",&a[n]);
     
    if(a[n]==0) goto end;
    else {
        n++;
        goto loop;
    }
    end: if(a[0]==a[n-1]){
        printf("Success");
    } 
    else printf("Failure");

}