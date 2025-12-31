#include<stdio.h>
int main (){
    int x,flag;
    scanf("%d",&x);
    int y = x%100,i =2;
    while (i!=y){
        flag =0;
        if (y%i==0){
            flag =1 ; break;
        }
        i++;
    }
    flag ? printf("Not prime"): printf("Prime");

}