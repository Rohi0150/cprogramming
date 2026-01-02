#include <stdio.h>
int disp_2digit_ones5(int x){
    if(x%5==0 && x%10!=0){
        return x;
    }
    else return 0;
}
int main(){
    int x=10,y=0;
    while(x>9 && x<99){
        y= y + disp_2digit_ones5(x);
        x+=5;
    }
    printf("%d",y);
}