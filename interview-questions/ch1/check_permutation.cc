#include <algorithm>
#include <iostream>
#include <map>
#include <string>

// O(n)
bool IsPermutationHash(std::string rhs, std::string lhs)
{
  if(rhs.size() == lhs.size())
  {
    std::map<char, int> rhs_map;
    std::map<char, int> lhs_map;

    for(auto& c : rhs)
    {
      rhs_map[c]++;
    }
    for(auto& c : lhs)
    {
      lhs_map[c]++;
    }
    for(auto& c : rhs)
    {
      if(rhs_map[c] != lhs_map[c]) return false;
    }
    return true;
  }
  return false;
}

// O(n logn)
bool IsPermutationNoHash(std::string rhs, std::string lhs)
{
  if(rhs.size() == lhs.size())
  {
    std::string rhs_sorted = rhs;
    std::sort(rhs_sorted.begin(), rhs_sorted.end());
    std::string lhs_sorted = lhs;
    std::sort(lhs_sorted.begin(), lhs_sorted.end());

    for(int i = 0; i < rhs.size(); ++i)
    {
      if(rhs_sorted[i] != lhs_sorted[i]) return false;
    }
    return true;
  }
  return false;
}

int main(int argc, char* argv[])
{
  std::string rhs = argv[1];
  std::string lhs = argv[2];
  std::cout << "IsPermuationHash:\t" << IsPermutationHash(rhs, lhs) << std::endl;
  std::cout << "IsPermuationNoHash:\t" << IsPermutationNoHash(rhs, lhs) << std::endl;
  return 0;
}
