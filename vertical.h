#include <stdio.h>


int vertical(char matrix[ROW][COL]) {
  //percorrer todo tabuleiro da primeira coluna a ultima coluna
  int contador = 0;
  for (int col = 0; col < COL; col++){
    if (contador <= 1){
      contador = 0;
    for (int linha = 0; linha < ROW; linha++){
      char c = matrix[linha][col];
      if (c == 'D'){
        contador++;
      }
    }
    }

  }
//  printf("\ncontador vertical: %d\n", contador);
  if (contador > 1)
    return 2;
  return 0;
}