#include <stdio.h>
#include <stdlib.h>
void main(){
    int *(p)[3];
    int j,s,i;
    printf("Enter a 2 x 3 matrix : ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d", *(p+i)+j);
            s = s + *(*(p + i) + j);
        }
    }
    printf("The sum is %d", s);
    getchar();
}