#include <stdio.h>
#include <math.h>
int main()
{
    int n=0,dec=10,bin=0;
    
    printf("Binary equivalent of %d is :",dec);
    do{
      bin=(dec%2)*pow(10,n);
      n++;
      dec=dec/2;
    }while(dec!=0);
    
    printf("%d",bin);
}
