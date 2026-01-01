#include <stdio.h>
void disp_2digit_ones5(){
    int sum = 0;
    for (int x =10; x<100 ;x++){
        int y = x%10;
        int z= x/10;
        if (y==5 && x!=z*10){
            sum = sum + x;
        }
    }
    printf("%d",sum);
}
int main(){
    disp_2digit_ones5();
}