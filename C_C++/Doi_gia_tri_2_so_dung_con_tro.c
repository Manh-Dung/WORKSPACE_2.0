#include <stdio.h>
 
 
// Tham so dau vao la 2 bien con tro kieu int
void swap(int *a, int *b){						
    // dung * de lay gia tri cua bien ma con tro dang tro toi
    printf("Ham con, truoc khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
    // dung * de lay gia tri cua bien ma con tro dang tro toi va gan cho bien `tmp`
    int tmp = *a; 
    // sua gia tri cua bien ma con tro a dang tro toi,
    // bang gia tri cua bien ma con tro b dang tro toi
    *a = *b; 
    // sua gia tri cua bien ma con tro a dang tro toi,
    // bang gia tri cua bien con tro a dang tro toi, dang duoc luu trong `tmp`
    *b = tmp;
    // dung * de lay gia tri cua bien ma con tro dang tro toi
    printf("Ham con, sau khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
}
 
int main(){
    int a = 5, b = 7;
    printf("Ham main, truoc khi goi ham hoan vi, a = %d, b = %d\n", a , b);
    
    // Do tham so ham la 2 con tro, ta can truyen vao dia chi
    // Dung & de lay dia chi cua bien.
    swap(&a, &b);
    printf("Ham main, sau khi goi ham hoan vi, a = %d, b = %d\n", a , b);
}
