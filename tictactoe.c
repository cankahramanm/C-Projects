#include<stdio.h>
#include<stdlib.h>
/*
Mehmet Can KAHRAMAN
200008645
https://github.com/cankahramanm/C-Projects/blob/master/tictactoe.c
*/

char user_moves(char root[3][3]){
int line,column;
printf("Enter the row / column you want to play\n");
scanf("%d%d",&line,&column);

while(line>2||line<0||column<0||column>2||root[line][column]!='-'){/*Kullanıcının matris boyutu
  içerisinde seçim yapıp yapmadığını kontrol ediyoruz.*/
 printf("The range you entered is invalid, please try again \n");
 printf("Enter the row / column you want to play\n");
 scanf("%d%d",&line,&column);

}

root[line][column]='x';//Eğer matris boyutu içerisinde seçim yaptıysa o konumu işaretliyoruz.
return root[3][3];//matris olarak döndürdük çünkü yapılan hamleler doğrultusunda diğer hamleler yapılacak.
}
char pc_moves(char root[3][3]){
int line,column;
line=rand()%3;//random üretilen sayının 3 ile bölümünde kalanı alıyoruz matris boyutunda olsun diye.
column=rand()%3;
while(root[line][column]!='-')//Burda ise belirlenen konum işaretlenmiş ise yeniden konum alıyoruz.
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
  int i,j,moves,line,column;
  srand(time(NULL));//PC nin hep aynı hamleleri yapmaması için kullandım.Zamana bağlı olarak hamleler değişecektir.
char root[3][3]={{'-','-','-'},
                 {'-','-','-'},
                 {'-','-','-'}}; //ekranda çıkacak ilk şekil.
printf("  0  1  2\n");
    for(i=0;i<3;i++){
        printf("%d",i);
          for(j=0;j<3;j++){
            printf(" %c ",root[i][j]);//matriks yapımız.
                          }
printf("\n");
                    }
                    for(moves=0;moves<9;moves++)//burda hamleleri ilk user olmak üzere başlatıyoruz.
{

                     if(moves%2==0){//eğer hamle sayısı çift ise kullanıcı tekse pc hame-le yapıyor.
                           user_moves(root);

                                   }
                                   else{

                                   pc_moves(root);//pc nin hamlesini göstermek için.
                                       printf("  0  1  2\n");
                                        for(i=0;i<3;i++){
                                           printf("%d",i);
                                            for(j=0;j<3;j++){
                                            printf(" %c ",root[i][j]);
                                                            }
                                        printf("\n");
                                        }
                                     }
if(moves>3){
  if(root[2][0]==root[2][1]&&root[2][1]==root[2][2]){//bu if 2.satırı kontrol ediyor.
    printf("GAME OVER\n");
    if(root[2][2]=='x'){//burda ise kazananın kim olduğunu belirliyor.
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;//break komutları olmadan sağlıklı çalışmıyor oyun bittikten sonra devam ediyor
    }
  }
  if(root[1][0]==root[1][1]&&root[1][1]==root[1][2]){//bu if 1.satırı kontrol ediyor.
    printf("GAME OVER\n");
    if(root[1][2]=='x'){
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;
    }
  }
  if(root[0][0]==root[0][1]&&root[0][1]==root[0][2]){//bu if 0.satırı kontrol ediyor.
    printf("GAME OVER\n");
    if(root[0][2]=='x'){
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;
    }
  }
  if(root[0][0]==root[1][0]&&root[1][0]==root[2][0]){//bu if 0.sütunu kontrol ediyor.
    printf("GAME OVER\n");
    if(root[2][0]=='x'){
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;
    }
  }
  if(root[0][1]==root[1][1]&&root[1][1]==root[2][1]){//bu if 1.sütunu kontrol ediyor.
    printf("GAME OVER\n");
    if(root[2][1]=='x'){
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;
    }
  }
  if(root[0][2]==root[1][2]&&root[1][2]==root[2][2]){//bu if 2.sütunu kontrol ediyor.
    printf("GAME OVER\n");
    if(root[2][2]=='x'){
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;
    }
  }
  if(root[0][0]==root[1][1]&&root[1][1]==root[2][2]){//bu if çapraz hücreleri kontrol ediyor.
    printf("GAME OVER\n");
    if(root[2][2]=='x'){
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;
    }
  }
  if(root[2][0]==root[1][1]&&root[1][1]==root[0][2]){//bu if ise çapraz hücrelerden diğerini kontrol ediyor.
    printf("GAME OVER\n");
    if(root[0][2]=='x'){
      printf("Congratulations. You won.\n");
      break;
    }
    else{
      printf("Sorry. You lost.\n");
      break;
    }
  }
  if(moves==8){
    /*Normalde böyle kural varmı bilmiyorum
    ama bunu da ilk önce user oynadığında
    user daha avantajlı konumda oluyor eğer
    hamle sayısı 8 olursa 4 er hamle yaptıklarından
    eşit bir müsabaka oluyor.
    */
   printf("Game is a draw\nGood luck next time\n");
   break;
           }
}
}
return 0;
}
