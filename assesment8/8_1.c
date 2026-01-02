#include <stdio.h>
int disp_sum(int x,int sum){
    sum = sum+x;
    return sum;
    
}
int main(){
    int x=1,sum=0,y=0;
    while (x<6){
        y = y + disp_sum(x,sum);
        x++;
    }
    printf("%d",y);
}