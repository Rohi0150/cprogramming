#include <stdio.h>
int main(){
    int x,y,count=0;
    scanf("%d",&x);
    while (x){
        y=x%10;
        if (y%2==1){
            count++;
        }
        x/=10;
    }
    printf("%d",count);
}