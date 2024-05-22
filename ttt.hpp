#include<iostream>

using namespace std;

void ttt_intro();
vector<int> get_row_col();

template <typename TwoD>
string game_goes_on(TwoD& grid){
  // Check if there is a winner
  for(int i=0;i<3;i++)
      {
        if (grid[i][0]==grid[i][1] && grid[i][0]==grid[i][2]){
          return (grid[i][0]);
        }
      } 
  for(int j=0;j<3;j++){
        if (grid[0][j]==grid[1][j] && grid[0][j]==grid[2][j]){
          return (grid[0][j]);
        }
     }
  if (grid[0][0]==grid[1][1] && grid[0][0]==grid[2][2]){
    return (grid[0][0]);
    }
  else if (grid[0][2]==grid[1][1] && grid[0][2]==grid[2][0]){
    return (grid[0][2]);
  }
  else {
    return ("-");
  }
  
}

template <typename TwoD>
void display_grid(TwoD& grid){
    cout << "\n\nCurrent grid:\n";
    cout << "\ni,j  | i,1|i,2|i,3\n\n";
    for(int i=0;i<3;i++)
      {
        cout<<i+1 <<",j  | ";
        for(int j=0;j<3;j++)
        {
          if(j==1){
            cout << "| " << grid[i][j] << " |";
          }
          else{
            cout << " " << grid[i][j] << " ";
          }
      }
      if (i<2){
        cout << "\n     | ---|---|---";
      }
      cout << endl;
      }
    cout << "\n\n";
}