#include<stdio.h>

void nhap(int arr[], int &n){
	printf("Nhap so phan tu : ");
	scanf("%d",&n);
	for (int x=0;x<n;x++)
	{
		printf ("arr[%d] = ",x);
		scanf ("%d",&arr[x]);
	}
}

void xuat(int arr[], int n)
{
	for (int x=0;x<n;x++)
	{
		printf ("\narr[%d] = %d",x,arr[x]);
	}
}

int main ()
{
	int arr[20];
	int n;
	nhap (arr,n);
	xuat (arr,n);
	return 0;
}
