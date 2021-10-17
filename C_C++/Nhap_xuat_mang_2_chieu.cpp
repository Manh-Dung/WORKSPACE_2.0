#include <stdio.h>
 
 
void NhapMaTran(int a[][100], int &m, int &n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}

int KiemTraMT(int a[][100], int m, int n)
{
	float x=m/2;
	for(int i = 0; i < m; i++)
    	for(int j = 0; j < n; j++)
        	if((float)a[i][j]>=x && m>=3)
        	{
        		return 1;
			}
			else if(a[i][j]=2 && m>=3)
			{
				return 1;
			}
			else 
			{
				return 0;
			}
}
 
int main(){
    int a[100][100];
    int m,n,flag;
    do
    {
    	printf("nhap so hang n = "); scanf("%d",&n);
    	printf("nhap so cot m = "); scanf("%d",&m);
	}
	while(m!=n);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    flag=KiemTraMT(a, m, n);
    if (flag==1)
    {
    	printf("Do thi co chu trinh Hamilton");
	}
	else 
	{
		printf("Do thi khong co chu trinh Hamilton");
	}
}


