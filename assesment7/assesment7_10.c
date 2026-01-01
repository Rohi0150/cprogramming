#include<stdio.h>
void disp_2digit_odd_sum_tens7(){
    int sum =0;
    for (int i = 10; i<100;i++){
        int y = i /10;
        int z = i %10;
        if(y==7 && z%2==1){
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
int main(){
    disp_2digit_odd_sum_tens7();
}