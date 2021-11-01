#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    float a,b,c,d;

    if ((fptr = fopen ("input.txt" , "r")) == NULL){
        printf("Error! opening file");
       exit(1);
    }

    printf("Nhap vao 3 so a, b, c: ");
    fscanf(fptr, "%f %f %f",&a,&b,&c);

    fptr = fopen("output.txt","w");

    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    fprintf(fptr, "Phuong trinh co vo so nghiem!\n");
                else
                    fprintf(fptr, "Phuong trinh vo nghiem!\n");
            }
        else
            fprintf(fptr, "Phuong trinh co nghiem duy nhat la: %f\n",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            fprintf(fptr, "Phuong trinh vo nghiem!!!\n");
        else if (d==0)
            fprintf(fptr, "Phuong trinh co nghiem kep la: %f\n",-b/(2*a));
        else
            fprintf(fptr, "Phuong trinh co 2 nghiem phan biet la: %f,%f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }    
  
}