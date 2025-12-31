#include <stdio.h>
int main (){
    int x= 70,sum=0;  
    while(x<80){
        if(x%2==1){
            sum = sum + x;
        }
        x++;
    }
    printf("%d",sum);
}