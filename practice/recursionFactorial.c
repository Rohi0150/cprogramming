#include <stdio.h>
int fact(int n){
    int temp;
    if(n>=1)
    {
        temp=n*fact(n-1);
        
    }
    else {
        return 1;
    }
    return temp;
}
int main()
{
    int n ;
    scanf("%d",&n);
    int c = fact(n);
    printf("%d",c);
    return 0;
}