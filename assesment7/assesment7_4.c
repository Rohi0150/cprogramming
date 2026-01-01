#include <stdio.h>
void disp_rsum(){
    int x=6,sum =0;
    while (x){
        sum = sum +x;
        x--;
    }
    printf("%d",sum);
}
int main(){
    disp_rsum();
}