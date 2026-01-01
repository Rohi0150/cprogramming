#include <stdio.h>
void disp_total_2digit(){
    int a, b, c, d;
    c = 0;
    scanf("%d", &a);
    d = a;
    while (d >= 10) {
        b = d % 100;
        if (b % 2 != 0) {
            c++;
        }
        d = d / 10;
    }
    printf("%d\n", c);
}
int main() {
    disp_total_2digit();
}