#include<stdio.h>
#include<stdlib.h>



int main(){
    int i,j=0;
    char root[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};// ilk çıkacak şekil
    printf("1 2 3\n"); 
    for(i=0;i<3;i++){
        printf("%d",i);
            for(j=0;j<3;j++){
                printf(" %c ",root[i][j]);
 }

    return 0;
}