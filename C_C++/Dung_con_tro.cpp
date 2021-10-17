/*
#include <stdio.h>
 
void addOne(int *ptr)
{
    (*ptr)++;
}
 
int main()
{
	int i=10;
    int *p;
	p= &i;
	// int *p=&i;
    
    addOne(p);
    printf("%d", *p); 
    return 0;
}

												Cach khac dung tham chieu : */
 #include <stdio.h>
 
void addOne(int ptr) 					
{
    ptr++;
}
 
int main()
{
	int p = 10 ;	  
    addOne(p);
    printf("%d\n", p); 
    return 0;
}

