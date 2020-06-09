#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Print the chessboard configuration
void printConfiguration(int ROW, int COL, char M[ROW][COL]) 
{ 
    for (int i=0; i< ROW; i++) 
    { 
        for (int j=0; j<COL; j++) 
            printf("%3c ", M[i][j]); 
        printf("\n"); 
    } 
} 

// Validade the chessboard
// if the returned value is 2, then the chessboard Configuration is Invalid
// if the returned value is 0, then the chessboard Configuration is Valid
int validateChessboad(int ROW, int COL, char M[ROW][COL]){

    int vert = vertical(ROW, COL, M); 
    int horiz = horizontal(ROW, COL, M);
    int diag = diagonal(ROW, COL, M);
    int diag2 = diagonal2(ROW, COL, M);
    if (vert == 0 && horiz == 0 && diag == 0 && diag2 == 0){
      return 0;
    }
    else{
      return 2;
    }
}

// Generate n chessboards of m x m size, with q queen randomly inserted fro each.
void generateChessboard(int m, int n, int q) { 
  int min = 0, max = m-1;

  char chessboard[m][m];
  for (int i = 0; i < n; i++){
    // produzir o tabuleiro com ---- sem nenhuma rainha
    for (int i = 0; i < m; i++){
      for (int j = 0; j < m; j++){
        chessboard[i][j] = '-';
      }
    }

    int it = 0;

    //inserir q rainhas (D) segundo nos indices gerados aleatoriamente
    while (it < q){
      // i: indice linha
      int i = (rand() % (max - min + 1)) + min;

      // j: indice coluna
      int j = (rand() % (max - min + 1)) + min;

      //caso nao haja rainha D nos endereco tabuleiro[i][j]
      // insira a rainha
      if (chessboard[i][j] != 'Q'){
        chessboard[i][j] = 'Q';
        it++;
      }
    }

    int returnValue;
    //dependendo do valor de retorno, imprimir a configuracao.
    //caso o valor de retorno for 0, imprimir a configuracao, porque ela e valida
    //caso nao, ignorar a configuracao pois ela nao e valida
    returnValue = validateChessboad(m, m, chessboard);
    if (returnValue == 0){
      printf("\n\nValid Configuration:\n");
    }
    else {
      printf("\n\nInvalid Configuration:\n");
    }
      
    printConfiguration(m, m, chessboard);
  
  }

}
