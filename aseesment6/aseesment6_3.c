#include <stdio.h>
int main (){
    int x=1,sum =0;
    while(x<6){
        sum = sum + x;
        x++;
    }
    printf("%d",sum);
}