#include <stdio.h>
int disp_2digit_odd_sums_tens7(int x,int sum){
    if(x/10==7 && x%2==1){
        sum = sum + x;
        return sum; 
    }
    else return 0;
}
int main(){
    int x =0,y,sum=0;
    while(x<90){
    y= y+ disp_2digit_odd_sums_tens7(x,sum);
    x++;
    }
    printf("%d",y);
}