#include <stdio.h> 
#include <stdlib.h> 
  



int diagonal2(int ROW, int COL, char matrix[ROW][COL]) {

  char tmp[ROW][COL]; 

  //produzir uma matriz conversa tmp
  for (int line = 0; line < ROW; line++) {
    int j = 0;
    for (int col = COL-1; col >= 0; col--) {
      tmp[line][j++] = matrix[line][col];
    }
  }

  //validar a matrix conversa
  //retornar o valor 0 ou 2, segundo a configuracao for valida (0) ou invalida(2) 
  int returnValue = diagonal(ROW, COL, tmp);
  return returnValue;
}
