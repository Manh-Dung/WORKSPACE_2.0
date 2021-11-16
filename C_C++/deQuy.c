#include<stdio.h>

long long giaiThua(int n) {
    if (n == 1) return 1;
    else return n * giaiThua(n - 1);
}

int main() {
    int n = 5;
    printf("%d", giaiThua(n));
    return 0;
}