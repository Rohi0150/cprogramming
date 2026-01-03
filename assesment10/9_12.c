/*Question: 
Convert an integer array of up to 50 digits to a character array and print using printf("%s", ....);

Example: * Array: 1 4 5 8 7 6 3

Answer: 1458763*/
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i =0 ;i<n ;i++){
        scanf("%d",&a[i]);
    }

    char b[n];
    for (int i =0 ;i<n ;i++){
        b[i]=a[i]+48;
    }
    printf("%s",b);
}