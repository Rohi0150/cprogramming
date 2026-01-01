#include <stdio.h>
void disp_sum(){
    int x=1,sum=0;
    while (x<6){
        sum = sum + x;
        x++;
    }
    printf("%d",sum);
}
int main(){
    disp_sum();
}