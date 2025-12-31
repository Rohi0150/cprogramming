#include<stdio.h>
int main(){
    int x;
    x=9999;
    while(1){
        if(x%7==0 && x%9==0){
            printf("%d",x);
            break;
        }
        else x--;
    }
}