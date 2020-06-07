#include <stdio.h> 
#include <stdlib.h> 
#include "diagonal.h"
#include "vertical.h"
#include "horizontal.h"
#include "diagonal2.h"
#include "gerador.h"
  

 
// funcao principal para executar o programa
int main(int argc, char *argv[]) {
  int m, n, q;

  //a seed que utiliza o tempo para permitir gerar numeros aleatorios
  srand((unsigned)time(NULL));

  if (argc == 4) { //Caso tenha fornecido seguintes argumentos: ./random M N Q
    m = atoi(argv[1]);
    n = atoi(argv[2]);
    q = atoi(argv[3]);
  }
  else if (argc == 2) { //Caso tenha fornecido seguintes argumentos: ./random M 
    m = atoi(argv[1]);
    n = atoi(argv[1]);
    q = atoi(argv[1]);   
  }
  else if (argc < 2 || argc == 3 || argc < 4) { //Caso nao tenha fornecido nenhum argumento 
    printf("Usage: ./main m n q\n");
    return 3;
  }

  //gerar n configuracao de m x m, cada configuracao contendo q rainhas (D)
  //mas imprimir apenas as configuracoes validas
   gerarConfiguracao(m,n, q);
  
  return 0;
}