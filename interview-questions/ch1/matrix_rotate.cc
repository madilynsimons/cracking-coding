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
