//Get 5 numbers from the user, reverse each number, create a new array, and print the sum of all numbers in the new array
#include <stdio.h>
int main(){
    int n=5;
    int a[n];
    for (int i= 0 ;i<n ;i++){
        scanf("%d",&a[i]);
    }
    int sum =0 ;
    for(int i=0 ;i<n ;i++){
        int revs=0;
        int temp=a[i],count=1;
        while(temp){
            count = count *10;
            temp/=10;
        }
        count = count/10;
        while (count){
            int rem = a[i]%10;
            revs = revs + rem *count;
            a[i]/=10;
            count/=10;
        }
        printf("%d\n",revs);
        sum = sum +revs;
    }
    printf("%d",sum );
}