#include<stdio.h>
#include<stdlib.h>

char user_moves(char root[][3]){
int line,column;
printf("Enter the row / column you want to play=\n");
scanf("%d%d",&line,&column);

while(line>2||line<0||column<0||column>2||root[line][column]!='-'){
 printf("The range you entered is invalid, please try again= \n");
 scanf("%d%d\n",&line,&column);
 scanf("%d%d\n",&line,&column);
}

root[line][column]='x';
return root[3][3];
}
char pc_moves(char root[][3]){
int line,column;
line=rand()%3;
column=rand()%3;
while(root[line][column]!='-')
{
line=rand()%3;
column=rand()%3;
}
printf("\nPC's move\n");
printf("Line: %d \n",line);
printf("Column: %d \n\n",column);
root[line][column]='o';
return root[3][3];
}
int main()
{
  int i,j,moves;

char root[3][3]={{'-','-','-'},
                 {'-','-','-'},
                 {'-','-','-'}}; //ekranda çıkacak ilk şekil.
printf("  0  1  2\n");
    for(i=0;i<3;i++){
        printf("%d",i);
          for(j=0;j<3;j++){
            printf(" %c ",root[i][j]);
                          }
printf("\n");
                    }
                    for(moves=0;moves<9;moves++)
{

                     if(moves%2==0){
                           user_moves(root);

                                   }
                                   else{

                                   pc_moves(root);
                                       printf("  0  1  2\n");
                                        for(i=0;i<3;i++){
                                           printf("%d",i);
                                            for(j=0;j<3;j++){
                                            printf(" %c ",root[i][j]);
                                                            }
                                        printf("\n");
                                        }
                                     }
}
return 0;
}
