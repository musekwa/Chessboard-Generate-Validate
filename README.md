# Chessoard: Generate and Validade:

## Specification:
Generate N chessboards of M x M size with Q queens randomly placed within each and validate each of them.
Next, check if each of these n chessboard has the valid configuration. 
A chessoard configuration is <strong>VALID</strong> if each queen placed within it is in the attack-free free zone horizontally, veritically and diagonally.
In other words, no two queens must been in the same line or colum or diagonal.
Otherwise, the chessboard configuration is <strong>INVALID</strong>

## User stories:
To test this program, just input this in the <strong>command line one of the following:</strong>: 
- <code>./main integer1 integer2 integer3</code> , 
then the program will generate <strong>integer2</strong> chessboards of <strong>integer1</strong> size and <strong>integer3</strong> queens within each.
- <code>./main integer</code> ,
then the program will generate <strong>integer</strong> chessboards of <strong>integer</strong> size and <strong>integer</strong> queens within each.

## Tools:
- C programming Language
