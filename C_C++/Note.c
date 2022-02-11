#include <stdio.h>

int main(){
    int a = 5;
    int b = --a + --a + a++; // 3 + 3 + 3; Noi chung la thuc hien het may cai toan tu roi moi bat dau tinh
    printf("%d ", b);
}