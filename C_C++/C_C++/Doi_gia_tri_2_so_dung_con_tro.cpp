#include <stdio.h>
 
 
// Tham so dau vào là 2 bien con tro kieu int
void swap(int *a, int *b){						// int *a = &a;  int *b = &b;
    // dùng * de lay giá tri cua bien mà con tro dang tro toi
    printf("Ham con, truoc khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
    // dùng * de lay giá tri cua bien mà con tro dang tro toi và gán cho bien `tmp`
    int tmp = *a; 
    // sua giá tri cua bien mà con tro a dang tro toi,
    // bang giá tri cua bien mà con tro b dang tro toi
    *a = *b; 
    // sua giá tri cua bien mà con tro a dang tro toi,
    // bang giá tri cua bien con tro a dang tro toi, dang duoc luu trong `tmp`
    *b = tmp;
    // dùng * de lay giá tri cua bien mà con tro dang tro toi
    printf("Ham con, sau khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
}
 
int main(){
    int a = 5, b = 7;
    printf("Ham main, truoc khi goi ham hoan vi, a = %d, b = %d\n", a , b);
    
    // Do tham so hàm là 2 con tro, ta can truyen vào dia chi
    // Dùng & de lay dia chi cua bien.
    swap(&a, &b);
    printf("Ham main, sau khi goi ham hoan vi, a = %d, b = %d\n", a , b);
}
