#include <stdio.h>
void count_total_digits(){
    int x,count =0;
    scanf("%d",&x);
    while(x){
        x = x/10;
        count++;
    }
    printf("%d",count);
}
int main(){
    count_total_digits();
}