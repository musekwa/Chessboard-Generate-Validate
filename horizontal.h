#include <stdio.h>


int horizontal(char matrix[ROW][COL]) {
    //percorrer todo tabuleiro da primeira a ultima linha
    int contador = 0;
    for (int linha = 0; linha < ROW; linha++){
      if (contador <= 1){
        contador = 0;
    for (int col = 0; col < COL; col++){
      char c = matrix[linha][col];
      if (c == 'D'){
        contador++;
      }
    }
      }
  }
 // printf("\ncontador horizontal: %d\n", contador);
    if (contador > 1) {
      return 2;
    }
  return 0;
}