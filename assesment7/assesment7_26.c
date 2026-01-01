#include <stdio.h>
void display_biggest_4digit_div7_and9(){
    int x= 9999;
    while(x){
        if(x%7==0 &&x%9==0){
            printf("%d",x);
            break;

        }
        x--;
    }
}
int main(){
    display_biggest_4digit_div7_and9();
}