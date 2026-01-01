#include<stdio.h>
void disp_sum_all_digits(){
    int x,sum =0 ;
    scanf("%d",&x);
    while(x){
        int y = x%10;
        sum = sum +y;
        x=x/10;
    }
    printf("%d",sum);
}
int main(){
    disp_sum_all_digits();
}