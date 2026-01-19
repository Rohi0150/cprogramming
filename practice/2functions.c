#include <stdio.h>
int f(){
    return 5;
}
int g(){
    return f()+3;
}
void main(){
    int a ;
    a= f()*g();
    printf("%d",a);
}