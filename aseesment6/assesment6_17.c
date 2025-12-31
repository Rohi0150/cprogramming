#include <stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    int y =x ,z,sum =0 ,flag;
    while (x){
        z=x%10;
        sum =sum + z;
        x/=10;
    }
    printf("%d",sum);
    int i = 2;
    while(i!=y){
        flag =0;
        if(y%i==0){
            flag =1 ;
            break;
        }
        i++;
    }
    if (!flag && sum==14) printf("Prime & sum of digits is 14");
    else if (flag && sum ==14) printf("Not prime but , sum of the digits is 14");
    else if (flag && sum!=14) printf("Not prime and sum of the digits is not equal to 14");
    else printf("Prime and sum of digits is not equal to 14");
}