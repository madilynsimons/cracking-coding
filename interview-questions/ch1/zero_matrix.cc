#include <iostream>
#include <map>
#include <vector>
#include <stdlib.h>

using namespace std;

void print(vector<vector<int> >& in)
{
  for(auto& in_vec : in)
  {
    for(auto& in_elem : in_vec)
    {
      std::cout << in_elem << " ";
    }
    std::cout << "\n";
  }
}

void set_zero(vector<vector<int> >& in, int row, int col)
{
  int how_many_rows = in.size();
  int how_many_cols = in[0].size();

  for(int r = 0; r < how_many_rows; r++)
  {
    in[r][col] = 0;
  }

  for(int c = 0; c < how_many_cols; c++)
  {
    in[row][c] = 0;
  }
}

void zero(vector<vector<int> >& in)
{
  map<int, bool> rows;
  map<int, bool> cols;

  int row = 0, col = 0;
  for(auto& vec : in)
  {
    col = 0;
    for(auto& elem : vec)
    {
      if(elem == 0){
        rows[row] = true;
        cols[col] = true;
      }
      col++;
    }
    row++;
  }

  for(auto row_it = rows.begin(); row_it != rows.end(); row_it++)
  {
    int r = row_it->first;
    for(int c = 0; c < col; c++)
    {
      in[r][c] = 0;
    }
  }

  for(auto col_it = cols.begin(); col_it != cols.end(); col_it++)
  {
    int c = col_it->first;
    for(int r = 0; r < row; r++)
    {
      in[r][c] = 0;
    }
  }
}

int random_number()
{
  return rand() % static_cast<int>(9 + 1);
}

int main()
{
  vector<vector<int> > in;

  int i_max = random_number();
  int j_max = random_number();

  for(int i = 0; i < i_max; i++){
    vector<int> random_numbers;
    for(int j = 0; j < j_max; j++)
    {
      int num = random_number();
      random_numbers.push_back(num);
    }
    in.push_back(random_numbers);
  }

  cout << "INPUT:" << endl;
  print(in);
  cout << endl;


  cout << "OUTPUT:" << endl;
  zero(in);
  print(in);

  return 0;
}
