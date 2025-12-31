#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int y = x, a = 1;
    while (y > 0) {
        a = a * 10;
        y = y / 10;
    }

    int z = a / 100, d = 1, count = 0;

    while (z / d >= 1) {
        int pair = x / (z / d) % 100;

        int e = 1;
        while (e < 10) {
            if (pair == e * e) {
                count++;
                break;
            }
            e++;
        }
        d = d * 10;
    }
    printf("%d", count);
    return 0;
}
