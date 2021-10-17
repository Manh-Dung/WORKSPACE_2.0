#include<stdio.h>

int main(){
  int option;
  printf("\n=====MENU====");
  printf("\n1. Lua chon 1");
  printf("\n2. Lua chon 2");
  printf("\n3. Lua chon 3");
  printf("\n4. Lua chon 4");
  printf("\n5. Lua chon 5");
  printf("\n6. Thoat");
  printf("\n=============");
  
    printf("\nMoi ban chon 1 lua chon: ");
    scanf("%d",&option);
    switch(option){
      case 1:
        printf("\nBan da chon Lua chon 1");
        break;
      case 2:
        printf("\nBan da chon Lua chon 2");
        break;
      case 3:
        printf("\nBan da chon Lua chon 3");
        break;
      case 4:
        printf("\nBan da chon Lua chon 4");
        break;
      case 5:
        printf("\nBan da chon Lua chon 5");
        break;
      case 6:
        printf("\nBan da chon Thoat");
        return 0;
    }
  

  return 0;
}
