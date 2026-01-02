#include <stdio.h>
int display_sum_all_digits(int x){
    int y,sum=0;
    while(x){
    y = x%10;
    x/=10;
    sum = sum+y;
    }
    return sum;
}
int main(){
    int x,y;
    scanf("%d",&x);
    y = display_sum_all_digits(x);
    printf("%d",y);
}