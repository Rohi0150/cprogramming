#include <stdio.h>
int count=0;
int count_total_digits(int num){
    while(num){
        num=num/10; 
        count++;
    }
    return count;
}
int main(){
    int x,y;
    scanf("%d",&x);
    y = count_total_digits(x);
    printf("%d",y);
}