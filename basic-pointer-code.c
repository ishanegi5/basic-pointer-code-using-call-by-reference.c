#include<stdio.h>
int ptr(int *x)
{ printf("x= %d",*x);
    return 0;
}
int main()
{ int a=7;
 ptr(&a); 
return  0;
}