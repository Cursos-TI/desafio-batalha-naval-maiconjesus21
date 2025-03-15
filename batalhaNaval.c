#include <stdio.h>
# define linhas 10
# define colunas 10


    int main(){

    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};  //declaração das variaveis

   int numeros[10] = {1,2,3,4,5,6,7,8,9,10}; //letras do mapa 
   
   int mar[10][10] = {0};
   
   int navio[3] =  {3,3,3};    //criação das arrays(navio)
   int navio2[3] = {3,3,3};
   int navio3[3] = {3,3,3};
   int navio4[3] = {3,3,3};
   printf("\n\n***batalha naval***\n\n"); // exibição do titulo
    
   printf("   ");
   
   for (int l = 0; l < 11; l++)
    {
        printf(" %c ",letras[l]); //exibição da cordenada letra no mapa
    }
     printf("\n\n");
     
       mar[0][0] = navio[0]; //exibição dos navios inicias no mapa
       mar[0][1] = navio[1];
       mar[0][2] = navio[2];
     
       //
       mar[4][4] = navio2[0];
       mar[5][4] = navio2[1];
       mar[6][4] = navio2[2];
       
       for (int i = 0; i < 10; i++)  // exibição dos navios na diagonal do mapa
       {
        for (int j = 0; j < 10; j++)  
        {
            if (i == 9 && j == 9) 
            {
                mar[9][9] = navio3[0];
            } 
            if (i == 8 && j == 8)
            {
                mar[8][8] = navio3[1];
            } 
            if (i == 7 && j == 7)
            {
                mar[7][7] = navio3[2];
            } if (i == 8 && j == 0 && i + j == 8)
            {
              mar[8][0] = navio4[0];
            } if (i == 7 && j == 1 && i + j == 8)
            {
                mar[7][1] = navio4[1];
            } if (i == 6 && j == 2 && i + j == 8)
            {
                mar[6][2] = navio4[2];
            }
        }
       }
     for (int i = 0; i < linhas; i++){  // exibição do mapa com as cordenadas e os navios
        
        printf(" %d ",i+1);
        for (int j = 0; j < colunas; j++){
         printf(" %d ",mar[j][i]);
            
        }
        printf("\n");
      
    }
   return 0;
 }