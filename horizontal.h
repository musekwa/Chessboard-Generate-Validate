#include <stdio.h>


int horizontal(char matrix[ROW][COL]) {
    //percorrer todo tabuleiro da primeira a ultima linha
    for (int linha = 0; linha < ROW; linha++){
      int contador = 0;
    for (int col = 0; col < COL; col++){
      char c = matrix[linha][col];
      if (c == 'D'){
        contador++;
      }
    }
    //retorna 2 caso tenha lida mais de um 'D' numa linha
    // o que corresponde a configuracao invalida
    if (contador > 1) {
      return 2;
    }
  }
  return 0;
}