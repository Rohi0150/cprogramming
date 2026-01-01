#include<stdio.h>
void disp_2digit_even_sum6(){
    int x=0,y,z;
    while (x<=60){
        if (x>10){
            y = x/10;
            z = x%10;
        }
        if (y+z==6&&x%2==0){
            printf("%d\n",x);
        }
        x++;
    }
}
int main(){
    disp_2digit_even_sum6();
}