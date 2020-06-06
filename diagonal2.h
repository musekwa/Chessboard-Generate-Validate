#include <stdio.h> 
#include <stdlib.h> 
  

#define ROW 5 
#define COL 5 


int diagonal2(char matrix[ROW][COL]) {

  char tmp[ROW][COL]; 

  //produzir uma matriz conversa tmp
  for (int linha = 0; linha < ROW; linha++) {
    int j = 0;
    for (int col = COL-1; col >= 0; col--) {
      tmp[linha][j++] = matrix[linha][col];
    }
  }

  //validar a matrix conversa
  //retornar o valor 0 ou 2, segundo a configuracao for valida (0) ou invalida(2) 
  int valorDeRetorno = diagonal(tmp);
  return valorDeRetorno;
}
