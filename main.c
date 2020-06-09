#include <stdio.h> 
#include <stdlib.h> 
#include "diagonal.h"
#include "vertical.h"
#include "horizontal.h"
#include "diagonal2.h"
#include "generator.h"


// Program execution starts here
int main(int argc, char *argv[]) {
  int m, n, q;

  // The time-based random number seed
  srand((unsigned)time(NULL));

  if (argc != 4 && argc != 2) { //In case wrong arguments were provided in the command line 
    printf("Usage: ./main 5 7 2  ou ./main 5\n");
    return 3;
  }

  if (argc == 4) { //In case the command line received the following: ./main <integer> <integer> <integer>
    m = atoi(argv[1]);
    n = atoi(argv[2]);
    q = atoi(argv[3]);
  }

  if (argc == 2) { //In case the command line receied the following: ./main <integer> 
    m = atoi(argv[1]);
    n = m;
    q = m;
  }

  generateChessboard(m,n, q);
  
  return 0;
}