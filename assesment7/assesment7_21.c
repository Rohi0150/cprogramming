#include <stdio.h>
void disp_total_odd_digit(){
    int x,count=0;
    scanf("%d",&x);
    while (x){
        int y = x%10;
        if (y%2==1) count ++;
        x/=10;
    }
    printf("%d",count);
}
int main(){
    disp_total_odd_digit();
}