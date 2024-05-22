#include<iostream>
#include<vector>

using namespace std;

vector<int> get_row_col(){
  // Ask the payer successively the row and the col to play
  vector<int> row_col {0, 0};
  while (cin.fail() || row_col[0] > 3 || row_col[0] < 1){
      cout << "\nRow i (1, 2 or 3): ";
      cin >> row_col[0];
      if (cin.fail()){
        cin.clear();
        cin.ignore(1, '\n');
      }
    }
  while (cin.fail() || row_col[1] > 3 ||  row_col[1] < 1){
      cout << "Col j (1, 2 or 3): ";
      cin >> row_col[1];
      if (cin.fail()){
        cin.clear();
        cin.ignore(1, '\n');
      }
    }
    
  return (row_col);
}

void ttt_intro(){
  cout << "\n=================\n\
== Tic-Tac-Toe ==\
\n=================\n\n";

  cout << "Two players, X and O, who take turns marking the spaces in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.\n\nThe grid is as below:\n";

  cout << "\ni,j |   i,0 | i,1 | i,2 \n\n";
  for(int i=0; i<3; i++)
	  {
      cout << i <<",j |  ";
	  	for(int j=0; j<3; j++)
	  	{
        if(j==1){
          cout << "| " << i << "," << j <<" |";
        }
        else{
          cout << " " << i << "," << j << " ";
        }
	  		
		}
    if (i<2){
      cout << "\n    |   --- | --- | ---";
    }
		cout << endl;
	  }
  std::cout << "\n";
}