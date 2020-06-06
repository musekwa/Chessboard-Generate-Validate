#include <stdio.h> 
#include <stdlib.h> 
  

#define ROW 5 
#define COL 5 
  
// retornar o valor minimo entre os dois 
int minu(int a, int b){ 
  if (a < b){
    return a;
  }
    return b;
} 
  
// retornar o minimo entre os 3 
int min(int a, int b, int c) {
  return minu(minu(a, b), c);
}
  
// retornar o maximo entre os dois 
int max(int a, int b)
{
  if ( a > b){
    return a;
  }
  return b;
}


  
// imprimir em diagonal
//caso matrix seja valida, retorna 0, caso seja invalida, retorna 2
int diagonal(char matrix[ROW][COL]) 
{ 
    // havera ROW + COL - ! linhas na saida
    for (int linha = 1; linha <= (ROW + COL - 1); linha++) 
    { 
        int contador = 0;
        int col_inicial =  max(0, linha - ROW); 
  
         int count = min(linha, (COL - col_inicial), ROW); 
  
       //percorrer o tabuleiro em diagonal, linha por linha
        for (int j = 0; j < count; j++){ 
            char c = matrix[minu(ROW, linha)-j-1][col_inicial+j];
            if (c == 'D'){
              contador++;
            }
        }
        //retorna 2 caso tenha lida mais de um 'D' numa linha diagonal
        // o que corresponde a configuracao invalida
        if (contador > 1){
          return 2;
        }
    } 
    return 0;
} 