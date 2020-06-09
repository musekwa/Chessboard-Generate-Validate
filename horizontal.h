#include <stdio.h>

  //Scan the chessboard line by line
int horizontal(int ROW, int COL, char matrix[ROW][COL]) {

    //check if any line ever ha more than 1 queens within it
    int counter = 0;
    for (int line = 0; line < ROW; line++){
      if (counter <= 1){
        counter = 0;
      for (int col = 0; col < COL; col++){
        char c = matrix[line][col];
        if (c == 'D'){
        counter++;
      }
    }
      }
  }
   //If any line ever has more than one queens within it;
    // then, return 2, otherwise, return 0
  if (counter > 1) {
      return 2;
    }
  return 0;
}