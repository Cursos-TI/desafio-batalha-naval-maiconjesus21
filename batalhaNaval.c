#include <stdio.h>


 int main(){
    
    printf("novo commit\n");
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};  //declaração das variaveis

   int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
   
   int mar[10][10] = {0};
   
   int navio[3] =  {3,3,3};
   int navio2[3] = {3,3,3};


   printf("\n\n***batalha naval***\n\n"); // exibição do titulo
    
   printf("   ");
   
   for (int l = 0; l < 11; l++)
    {
        printf(" %c ",letras[l]); //exibição da cordenada letra no mapa
    }
     printf("\n\n");
     
       mar[0][0] = navio[0];       //exibição do navio no mapa
       mar[0][1] = navio[1];
       mar[0][2] = navio[2];
     
       //
       mar[4][4] = navio2[0];
       mar[5][4] = navio2[1];
       mar[6][4] = navio2[2];



     for (int i = 0; i < 10; i++){  // exibição do mapa com as cordenadas e os navios
        
        printf(" %d ",i+1);
        for (int j = 0; j < 10; j++){
         printf(" %d ",mar[j][i]);
            
        }
        printf("\n");
      
    }
   return 0;
 }