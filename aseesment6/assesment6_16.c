#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    int i =2,flag ;
    while (i!=x){
        flag =0 ;
        if (x%i==0) {flag =1 ; break;}
        i++;
    }
    if (flag) printf("Not Prime");
    else printf("Prime");
}