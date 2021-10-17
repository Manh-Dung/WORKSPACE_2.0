#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapXepLeTangDan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++) 									// Boi vi ty nua se xuat hien 1 a[j] = a[n], no ko ton tai nen lam the nay la hop ly nhat
    {
        if(a[i] % 2 != 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] % 2 != 0 && a[i] > a[j]) 					// No se xet a[i] trong truong hop nay nen m ko phai lo so a[i] ko phai la so le hay a[i] 
                {													// xa a[j] hon 1 khoang
                    HoanVi(a[i], a[j]);
                }
            }

        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    SapXepLeTangDan(a, n);
    printf("\nMang sau khi sap xep le tang dan: ");
    xuat(a, n);

    getch();
    return 0;
}