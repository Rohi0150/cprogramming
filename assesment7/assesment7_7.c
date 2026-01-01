#include <stdio.h>
void disp_2digit_odd_sum7(){
    int x=0 ;
    while (x<70){
    if (x>10){
        int y =x/10;
        int z =x%10;
        if (x%2==1 && y+z==7) printf("%d\n",x);
        }
    x++;
    }
}
int main(){
    disp_2digit_odd_sum7();
}