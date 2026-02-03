/*Example 1:

Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
Example 2:

Input: n = 4, start = 3
Output: 8
Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.*/
#include <stdio.h>
int xorOperation(int n, int start) {
    int x = 0 , y =0 ;
    for (int i = start  ; y!=n ; i+=2 ){
        x = x ^ i; 
        y++;
    }
    return x;
}
int main(){
    int n , start;
    scanf("%d",&n);
    scanf("%d",&start);
    int m = xorOperation(n, start);
    printf("%d",m);
}