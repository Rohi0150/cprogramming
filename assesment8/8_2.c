#include <stdio.h>
int disp_rsum(int x){
    return x;
}
int main(){
    int x,y=0;
    x=6;
    while (x>0){
        y=y+ disp_rsum(x);
        x--;
    }
    printf("%d",y);
}