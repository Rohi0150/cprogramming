#include <stdio.h>
int main (){
    int x=10,sum =0;
    while(x<100){
        if(x%5==0 && x%10!=0)
        sum = sum +x;
        x++;
    }
    printf("%d",sum);
}