#include <stdio.h>
int main (){
    int x,y;
    scanf("%d",&x);
    while(x){
        y = x%10;
        printf("%d",y);
        x = x/10;
    }
}