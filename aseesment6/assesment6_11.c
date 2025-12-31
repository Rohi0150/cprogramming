#include <stdio.h>
int main (){
    int x=0,count =0 ;
    scanf("%d",&x);
    while (x!=0) {
        count++;
        x=x/10;
    }    
    printf("%d",count);
}