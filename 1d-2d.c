#include<stdio.h>
int main(){
    int old[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int new[3][3],r,c,n;
    for (r=0;r<3;r++){
        for( c=0;c<3;c++){
            new[r][c]=old[n];
            n++;
        }
    }
    printf("New 2D array:\n");
    for (r=0;r<3;r++){
        for( c=0;c<3;c++){
            printf("%d ",new[r][c]);
        }
        printf("\n");
    }
}
