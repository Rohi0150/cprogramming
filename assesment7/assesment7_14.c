#include <stdio.h>
void disp_interchange_first_last_digit(){
    int x;
    scanf("%d",&x);
    int y = x%10;
    int z= x;
    int count =1;
    while(z){
        count*=10;
        z/=10;
    }
    int rem = count/10;
    int l = x/rem;
    printf("%d",(rem*y)+((x/10)%(rem/10))*10 +l);
}
int main(){
    disp_interchange_first_last_digit();
}