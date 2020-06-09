#include <stdio.h> 
#include <stdlib.h> 
  
  
// Return the minimum number between the two integers provided 
int minu(int a, int b){ 
  if (a < b){
    return a;
  }
    return b;
} 
  
// Return the minimum number between the 3 integers provided
int min(int a, int b, int c) {
  return minu(minu(a, b), c);
}
  
// return the maximum numer between the 2 integers provided
int max(int a, int b)
{
  if ( a > b){
    return a;
  }
  return b;
}


  

// Scan the chessboard diagonally and chech if 
// two different queens are placed in the same diagonal
int diagonal(int ROW, int COL, char matrix[ROW][COL]) 
{ 
    // Througout chessboard check diagonally
    int counter = 0;
    for (int line = 1; line <= (ROW + COL - 1); line++) 
    {   
        int firstCol =  max(0, line - ROW); 
  
         int count = min(line, (COL - firstCol), ROW); 
  
       //Search for queens in the diagonal
       if (counter <= 1){
         counter = 0;
        for (int j = 0; j < count; j++){ 
            char c = matrix[minu(ROW, line)-j-1][firstCol+j];
            if (c == 'Q'){
              counter++;
            }
        }
        }
     }
    //If any diagonal ever has more than one queens within it;
    // then, return 2, otherwise, return 0
    if (counter > 1){
      return 2;
    }
    return 0;
} 