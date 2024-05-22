# Tic-Tac-Toe

This is a quickly disigned C++ Tic-Tac-Toe game.


Two players, X and O, who take turns marking the spaces in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.

The grid is as below:
```
i,j |   i,0 | i,1 | i,2 

0,j |   0,0 | 0,1 | 0,2 
    |   --- | --- | ---
1,j |   1,0 | 1,1 | 1,2 
    |   --- | --- | ---
2,j |   2,0 | 2,1 | 2,2 
```

Each player is successively asked for the $Row \space i$ and $Col \space j$ which they want to play.

## Example of a game:
Compile then execute the file in the terminal:

```
$ g++ -o main.exe main.cpp ttt.cpp
$ ./main.exe

=================
== Tic-Tac-Toe ==
=================

Two players, X and O, who take turns marking the spaces in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.

The grid is as below:

i,j |   i,0 | i,1 | i,2 

0,j |   0,0 | 0,1 | 0,2 
    |   --- | --- | ---
1,j |   1,0 | 1,1 | 1,2 
    |   --- | --- | ---
2,j |   2,0 | 2,1 | 2,2 



Current grid:

i,j  | i,1|i,2|i,3

1,j  |    |   |   
     | ---|---|---
2,j  |    |   |   
     | ---|---|---
3,j  |    |   |   


========
Round 1
========

Player 'O' it's your turn, select a cell: 
Row i (1, 2 or 3): 1
Col j (1, 2 or 3): 1


Current grid:

i,j  | i,1|i,2|i,3

1,j  |  O |   |   
     | ---|---|---
2,j  |    |   |   
     | ---|---|---
3,j  |    |   |   


========
Round 2
========

Player 'X' it's your turn, select a cell: 
Row i (1, 2 or 3): 2
Col j (1, 2 or 3): 2


Current grid:

i,j  | i,1|i,2|i,3

1,j  |  O |   |   
     | ---|---|---
2,j  |    | X |   
     | ---|---|---
3,j  |    |   |   


========
Round 3
========

Player 'O' it's your turn, select a cell: 
Row i (1, 2 or 3): 1
Col j (1, 2 or 3): 2


Current grid:

i,j  | i,1|i,2|i,3

1,j  |  O | O |   
     | ---|---|---
2,j  |    | X |   
     | ---|---|---
3,j  |    |   |   


========
Round 4
========

Player 'X' it's your turn, select a cell: 
Row i (1, 2 or 3): 1
Col j (1, 2 or 3): 3


Current grid:

i,j  | i,1|i,2|i,3

1,j  |  O | O | X 
     | ---|---|---
2,j  |    | X |   
     | ---|---|---
3,j  |    |   |   


========
Round 5
========

Player 'O' it's your turn, select a cell: 
Row i (1, 2 or 3): 3
Col j (1, 2 or 3): 1


Current grid:

i,j  | i,1|i,2|i,3

1,j  |  O | O | X 
     | ---|---|---
2,j  |    | X |   
     | ---|---|---
3,j  |  O |   |   


========
Round 6
========

Player 'X' it's your turn, select a cell: 
Row i (1, 2 or 3): 3
Col j (1, 2 or 3): 3


Current grid:

i,j  | i,1|i,2|i,3

1,j  |  O | O | X 
     | ---|---|---
2,j  |    | X |   
     | ---|---|---
3,j  |  O |   | X 


========
Round 7
========

Player 'O' it's your turn, select a cell: 
Row i (1, 2 or 3): 2
Col j (1, 2 or 3): 1


Current grid:

i,j  | i,1|i,2|i,3

1,j  |  O | O | X 
     | ---|---|---
2,j  |  O | X |   
     | ---|---|---
3,j  |  O |   | X 


End of the game, player 'O' wins!!!
$ 

```