#include<stdio.h>
#include<stdlib.h>



int main()
{
    int i,j;
    char root[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};// ilk çıkacak şekil
    printf("0 1 2\n"); 
    for(i=0;i<3;i++){
        printf("%d",i);
            for(j=0;j<3;j++){
                printf(" %c\n ",root[i][j]);
                            }
                    }
    return 0;
}