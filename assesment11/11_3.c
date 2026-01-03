/*Question: Write a loop program to print 1 to 5 one by one. Write a function and print the result in a main function.

Function Name: arrange_ascend

Answer: 1 2 3 4 5*/
#include <stdio.h>
void arrange_ascend(int* ptr){
    while (*ptr < 6){
        printf("%d ",*ptr);
        *ptr = *ptr +1 ;
    }
}
int main(){
    int n =1 ;
    int *ptr = &n;
    arrange_ascend(ptr);
}