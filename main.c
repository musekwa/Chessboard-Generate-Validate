#include <stdio.h> 
#include <stdlib.h> 
#include "diagonal.h"
#include "vertical.h"
#include "horizontal.h"
#include "diagonal2.h"
  

  
// Imprimir o tabuleiro
void printMatrix(char M[ROW][COL]) 
{ 
    for (int i=0; i< ROW; i++) 
    { 
        for (int j=0; j<COL; j++) 
            printf("%3c ", M[i][j]); 
        printf("\n"); 
    } 
} 


//validar todo tabuleiro nas 4 diferentes posicoes
//imprimir VALIDO, caso a configuracao for valida
//imprimir INVALIDO, caso a configuracao for invalida
int validarTabuleiro(char M[ROW][COL]){

    int valorDeRetorno; 

    //validar na vertical:
    valorDeRetorno = vertical(M);
    if (valorDeRetorno == 2){
      printf("INVALIDO\n");
      return 3;
    }
    
    //validar na horizontal
    valorDeRetorno = horizontal(M);
    if (valorDeRetorno == 2){
      printf("INVALIDO\n");
      return 4;
    }

    //validar na primeira diagonal
    valorDeRetorno = diagonal(M);
    if (valorDeRetorno == 2){
      printf("INVALIDO\n");
      return 5;
    }

    //validar na segunda diagonal
    valorDeRetorno = vertical(M);
    if (valorDeRetorno == 2){
      printf("INVALIDO\n");
      return 6;
    }

    printf ("VALIDO\n"); 
    return 0;
}
  
// funcao principal para executar o programa
int main() 
{ 
    char M[ROW][COL] = {
                        {'-', '-', 'D', '-', '-'}, 
                        {'-', '-', '-', '-', 'D'}, 
                        {'-', 'D', '-', '-', '-'}, 
                        {'-', '-', '-', 'D', '-'}, 
                        {'D', '-', '-', '-', '-'} 
                      }; 
  
    printf ("Matriz dada \n"); 
    printMatrix(M); 
  
    printf ("\nResultado \n"); 
    validarTabuleiro(M);
} 