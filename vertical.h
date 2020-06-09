#include <stdio.h>

  //Scan the chessboard column by column
int vertical(int ROW, int COL, char matrix[ROW][COL]) {

  //check if any column ever has more than 1 queen
  int counter = 0;
  for (int col = 0; col < COL; col++){
    if (counter <= 1){
      counter = 0;
    for (int line = 0; line < ROW; line++){
      char c = matrix[line][col];
      if (c == 'D'){
        counter++;
      }
    }
    }

  }
  //If any column ever has more than one queens within it;
  // then, return 2, otherwise, return 0
  if (counter > 1)
    return 2;
  return 0;
}