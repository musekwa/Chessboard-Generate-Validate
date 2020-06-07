#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//imprimir configuracao
void imprimirConfiguracao(char M[ROW][COL]) 
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

    int vert = vertical(M); 
    int horiz = horizontal(M);
    int diag = diagonal(M);
    int diag2 = diagonal2(M);
    if (vert == 0 && horiz == 0 && diag == 0 && diag2 == 0){
      return 0;
    }
    else{
      return 2;
    }
}

void gerarConfiguracao(int m, int n, int q) { 
  int min = 0, max = m-1;
  int contador = 0;

  char tabuleiro[m][m];
  for (int i = 0; i < n; i++){
    // produzir o tabuleiro com ---- sem nenhuma rainha
    for (int i = 0; i < m; i++){
      for (int j = 0; j < m; j++){
        tabuleiro[i][j] = '-';
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
      if (tabuleiro[i][j] != 'D'){
        tabuleiro[i][j] = 'D';
        it++;
      }
    }

    int retorno;
    //dependendo do valor de retorno, imprimir a configuracao.
    //caso o valor de retorno for 0, imprimir a configuracao, porque ela e valida
    //caso nao, ignorar a configuracao pois ela nao e valida
    retorno = validarTabuleiro(tabuleiro);
    if (retorno == 0){
      printf("Configuracao Valida:\n");
      // Imprimir o tabuleiro
      imprimirConfiguracao(tabuleiro);
      contador++;
    }
  }
  //caso dentre das n configuracoes geradas, nehuma for valida
  //imprimir essa mensagem
  if (contador == 0){
    printf("\nNenhuma Configuracao Valida\n");
  }

}
