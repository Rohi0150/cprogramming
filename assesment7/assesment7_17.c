#include <stdio.h>
void check_prime_and_sum14(){
    int x;
    scanf("%d",&x);
    int flag=0,y=0,z=0;
    for(int i =2 ; i<x/2;i++){
        if(x%i==0){
        flag =1 ;
        y=x%10;
        break;}
    }
    y=x%10;
    z= x/10;
    if (!flag && z+y==14) printf("Prime &Sum of digits is 14");
    else if (!flag && z+y!=14) printf("Prime & sum of digits is not 14");
    else if (flag && z+y==14) printf("Not prime but sum of digit is 14");
    else printf("Not prime & sum of digits is not 14");
}
int main (){
    check_prime_and_sum14();
}