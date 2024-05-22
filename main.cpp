#include <iostream>
#include <string>
#include <vector>

#include "ttt.hpp"

using namespace std;

int main(){
  //==========
  // Variables

  // Boolean to check if the game continues
  bool game_still_on = true;

  // The two players
  vector<string> players {"X", "O"};

  // The winner, to reveal at the end
  string winner = "-";

  // Round of the game, start at round 1
  int round = 1;

  // vector {row, col} given by the player
  vector<int> row_col {0, 0};

  // The grid of the game
  string grid[3][3]{
    {" ", " ", " "},
    {" ", " ", " "},
    {" ", " ", " "}
  };

  //==========
  // Intro with rules
  ttt_intro();

  //==========
  // While the game is on, and less than 10 rounds
  // played, the game continues

  while (game_still_on && round < 10){
    // Display grid
    display_grid(grid);

    // Launch the round
    cout << "========\nRound "
         << round
         <<"\n========\n";
    
    cout << "\nPlayer '"
         << players[round%2]
         <<"' it's your turn, select a cell: ";

    // Get player's move (ask again if already filled cell)
    row_col = get_row_col();
    while(grid[row_col[0]-1][row_col[1]-1] != " "){
      cout << "\n\nCell already filled, please play another cell.\n";
      row_col = get_row_col();
    }

    // Update grid with latest move played
    grid[row_col[0]-1][row_col[1]-1] = players[round%2];

    // Check if theree is any winner (at least 5 move must have been payed)
    if (round >= 5){
      winner = game_goes_on(grid);
      if (winner == "X" || winner == "O"){
        game_still_on = false; // the game takes an end
      } 
    }
    round++;
  }

  // End of the game
  if (!game_still_on){
    display_grid(grid);
    cout << "End of the game, "
         << "player '"
         << winner
         <<"' wins!!!\n";
  }
  else{
    cout << "End of the game, no winner...";
  }
}