#include <stdio.h>
void disp_prime_1digit(){
    int x,flag =0,count=0;
    for (int i = 2 ;i < 10 ; i++){
        flag =0;
        for (int j =2 ;j <i ;j++){
            if (i%j==0){
                flag =1 ;
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
int main(){
    disp_prime_1digit();
}