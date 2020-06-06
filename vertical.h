#include <stdio.h>


int vertical(char matrix[ROW][COL]) {
  //percorrer todo tabuleiro da primeira coluna a ultima coluna
    for (int col = 0; col < COL; col++){
      int contador = 0;
    for (int linha = 0; linha < ROW; linha++){
      char c = matrix[linha][col];
      if (c == 'D'){
        contador++;
      }
    }
    //retorna 2 caso tenha lida mais de um 'D' numa coluna
    // o que corresponde a configuracao invalida
    if (contador > 1) {
      return 2;
    }
  }
  return 0;
}