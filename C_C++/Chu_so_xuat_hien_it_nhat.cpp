
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
        printf("%8d", a[i]);
    }
}

void demchuso(int a[], int n, int b[])
{
	for(int i = 0; i < n; i++)
	{
		int temp = abs (a[i]);
		while (temp != 0 )
		{
			int chuso = temp % 10;
			temp /= 10 ;
			b[chuso]++;
		}
	}
}

int csmin (int a[], int n, int b[])
{
	int min = abs (a[0] % 10);
	for(int i = 0; i < 10; i++)
	{
		if (b[i] != 0)
		{
			if (b[min] < b[i])
			{
				min = min ;
			}
			else
			{
			min = i ;
			}
		}
	}
	return min;
}

int main ()
{
	int n;
	int a[MAX];
	int b[10] = {0};
	nhap (a, n);
	xuat (a, n);
	demchuso (a, n ,b);
	for (int i = 0; i < 10; i++)
    {
        if (b[i] != 0)
        {
            printf("\nChu so %d xuat hien %d lan", i, b[i]);

        }
    }
	printf ("\nChu so xuat hien it nhat la : %d",csmin(a, n, b));
	getch ();
	return 0;
}





