/*Get multiple numbers from the user and store them in an array. 
Stop getting numbers when the number is 0. 
Add each number's digits and put them in a new array and arrange the new array in ascending order and print same.*/
#include <stdio.h>
int main(){
    int n =0;
    int a[100];
    loop:  scanf("%d",&a[n]);
    if(a[n]==0) goto end;
    else {
        n++;
        goto loop;
    }
    end: 
    int b[n];
    for (int i =0 ; i<n;i++){
    int temp = a[i];
    int sum =0;
        while(temp){
            int rem = temp%10;
            sum = sum +rem;
            temp=temp/10;
        }
        b[i] =sum;
    }
    for (int i =0 ; i<n-1;i++){
        for (int j =i+1 ;j<n ;j++){
            if (b[i]>b[j]){
                int temp= b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for (int i =0 ; i<n;i++){
        printf("%d",b[i]);
    }
}