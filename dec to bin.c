#include <stdio.h>
#include <math.h>
int main()
{
    int n=0,dec,bin=0;
    scanf("%d",&dec);
    
    printf("Binary equivalent of %d is :",dec);
    do{
      bin=(dec%2)*pow(10,n);
      n++;
      dec=dec/2;
    }while(dec!=0);
    
    printf("%d",bin);
}
