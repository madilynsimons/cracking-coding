#include <iostream>
#include <vector>

void print(std::vector<std::vector<int> >& in)
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

void rotate(std::vector<std::vector<int> >& in)
{
  int n = in.size();

  for(int layer = 0; layer < n/2; layer++)
  {
    int start = layer;
    std::cout << "start:\t " << start << std::endl;
    int end = (n-1) - layer;
    std::cout << "end:\t " << end << std::endl;
    int offset = end-start;
    std::cout << "offset:\t " << offset << std::endl;
    std::cout << "-----------" << std::endl;
    for(int it = 0; it < offset; it++)
    {
      int *top = &in[start][start + it];
      int *right = &in[start + it][end];
      int *bottom = &in[end][end - it];
      int *left = &in[end - it][start];
      int temp;

      temp = *top;
      *top = *left;
      *left = *bottom;
      *bottom = *right;
      *right = temp;
    }
  }
}

int main(){

  std::vector<std::vector<int> > in;

  for(int i = 0; i < 4; i++)
  {
    std::vector<int> nums;
    for(int j = 1; j <= 4; j++)
    {
      nums.push_back(i*4 + j);
    }
    in.push_back(nums);
  }
  rotate(in);
  print(in);
  return 0;
}
