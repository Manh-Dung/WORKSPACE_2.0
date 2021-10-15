#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void NhapMang(float a[][MAX], int &dong, int &cot)
{
    //Nh?p s? d?ng
    do
    {
        printf("\nNhap vao so dong: ");
        // C�ch t� �?o: scanf("dong =%d",&dong);  // L�c nh?p ph?i vi?t th�m  ch? ( dong =  ) ? khung console
        scanf("%d",&dong);

        if(dong < 1 || dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    }while(dong < 1 || dong > MAX);

    //Nh?p s? c?t
    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d",&cot);

        if(cot < 1 || cot > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    }while(cot < 1 || cot > MAX);
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            float temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%f", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%8.3f", a[i][j]);
        }
            printf("\n\n");
    }
}

/*            Ch? s?
            -1
 Ch? s?: -1 0 | 1   2   3
            --------------
            1 |    1    2    3
            2 |    4    5    6
            3 |    7    8    9
    // ph?n t? c?c �?i l� 9
*/
/*
�?u ti�n �?t flag=1 t?c l� m?c �?nh gi� tr? � a[d][c] l� c?c �?i,
n?u nh� 1 trong c�c � xung quanh � a[d][c] n�y c� gi� tr? l?n h�n n� (a[d][c]<=a[d+i][c+j]) th? �?t flag=0 t?c l� n� ko ph?i �i?m c?c �?i
 lo?i tr? tr�?ng h?p i=0 v� j=0 nh� trong l?nh if c� ghi v? n� tr�ng v?i t?a �? c?a a[d][c]
*/
int KiemTraPhanTuCucDai(float a[][MAX], int sodong, int socot, int dong, int cot)
{
    int flag = 1; // Kh?i �?u m?c �?nh � a[dong][cot] l� c?c �?i
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            if(dong + i >= 0 && cot + j >= 0 && dong + i < sodong && cot + j < socot && !(i == 0 && j == 0))
            {
                  if (a[dong][cot] <= a[dong + i][cot + j])
                  {
                      flag = 0;
                  }
            }
        }
    }
    return flag;
}

/*bool isMaxMatrix(int **a, int m, int n, int ix, int jx)
{
    int di[] = { -1,-1,-1,  0, 0,  1, 1, 1 };
    int dj[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    int no = a[ix][jx];
    bool CT = true, CD = true;
    for (int i = 0; i < 8; i++)
    {
        if (ix + di[i] >= 0 && ix + di[i] < m && jx + dj[i] >= 0 && jx + dj[i] < n)
        {
            if (no < a[ix + di[i]][jx + dj[i]]) CD = false;
            if (no > a[ix + di[i]][jx + dj[i]]) CT = false;
            if (!CD && !CT) break;
        }
    }
    if (!CD && !CT) return false;
    return true;
}*/
void DemSoPhanTuCucDai(float a[][MAX], int sodong, int socot)
{
    int dem = 0;
    printf("\nCac phan tu cuc dai la: \n");
    for(int i = 0; i < sodong; i++)
    {
        for(int j = 0; j < socot; j++)
        {
            if(KiemTraPhanTuCucDai(a, sodong, socot, i, j) == 1)
            {
                printf("\n%.3f", a[i][j]);
                dem++;
            }
        }
    }
    printf("\nSo phan tu cuc dai = %d", dem);
}


int main()
{
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    DemSoPhanTuCucDai(a, dong, cot);
    getch();
    return 0;
}
