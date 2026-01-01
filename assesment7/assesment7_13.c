#include <stdio.h>
void disp_rev_num(){
    int x;
    scanf("%d",&x);
    while(x){ 
    int y= x%10;
    printf("%d",y);
    x/=10;
    }
}
int main(){
    disp_rev_num();
}