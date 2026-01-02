#include <stdio.h>
int disp_interchange_first_last_digit(int x){
    int temp = x;
    int z=x%10;
    int count = 1;
    while (temp>10){
        count= count *10;
        temp/=10;
    }
    return z*count+(x/10)%(count/10)*10+temp;

}
int main(){
    int x;
    scanf("%d",&x);
    int y = disp_interchange_first_last_digit(x);
    printf("%d",y);
}