#include <stdio.h>
void disp_single_digit_prime(){
    int x,flag = 0,count=0;
    scanf("%d",&x);
    while(x){
        flag=0;
        int y=x%10;
        
        for (int i =2 ; i< y ; i++){
            if (y%i==0){
                flag =1 ;
                break;
            }
        }
        if (y<2 ) flag =1;
        if (flag ==0 ) count++;
        x/=10;

}
printf("%d",count);
}
int main(){
    disp_single_digit_prime();
}