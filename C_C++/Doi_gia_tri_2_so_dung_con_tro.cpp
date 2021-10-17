#include <stdio.h>
 
 
// Tham so dau v�o l� 2 bien con tro kieu int
void swap(int *a, int *b){						// int *a = &a;  int *b = &b;
    // d�ng * de lay gi� tri cua bien m� con tro dang tro toi
    printf("Ham con, truoc khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
    // d�ng * de lay gi� tri cua bien m� con tro dang tro toi v� g�n cho bien `tmp`
    int tmp = *a; 
    // sua gi� tri cua bien m� con tro a dang tro toi,
    // bang gi� tri cua bien m� con tro b dang tro toi
    *a = *b; 
    // sua gi� tri cua bien m� con tro a dang tro toi,
    // bang gi� tri cua bien con tro a dang tro toi, dang duoc luu trong `tmp`
    *b = tmp;
    // d�ng * de lay gi� tri cua bien m� con tro dang tro toi
    printf("Ham con, sau khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
}
 
int main(){
    int a = 5, b = 7;
    printf("Ham main, truoc khi goi ham hoan vi, a = %d, b = %d\n", a , b);
    
    // Do tham so h�m l� 2 con tro, ta can truyen v�o dia chi
    // D�ng & de lay dia chi cua bien.
    swap(&a, &b);
    printf("Ham main, sau khi goi ham hoan vi, a = %d, b = %d\n", a , b);
}
