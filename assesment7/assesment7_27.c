#include <stdio.h>
void disp_count_sum14(){
    int x= 1,sum ,count=0;
    int z=x;
    while (z<100000){
        sum=0;
        x=z;
        while (x){
        int y = x%10;
        sum = sum +y;
        x=x/10;
    }
    if (sum== 14) count++;
    z++;
    }
    printf("%d",count);
}
int main(){
    disp_count_sum14();
}