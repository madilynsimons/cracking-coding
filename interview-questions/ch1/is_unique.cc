#include <algorithm>
#include <iostream>
#include <map>
#include <string>

// O(n)
bool IsUniqueHash(std::string str)
{
  std::map<char, int> used_chars;
  for(char& c : str)
  {
    if(used_chars[c] > 0) return false;
    used_chars[c]++;
  }
  return true;
}

// O(n logn)
bool IsUniqueNoHash(std::string str)
{
  std::string sorted = str;
  std::sort(sorted.begin(), sorted.end());
  int length = sorted.size();

  for(int i = 0; i < length - 1; i++)
  {
    char first = sorted[i];
    char second = sorted[i+1];
    if(first == second) return false;
  }
  return true;
}

int main(int argc, char* argv[])
{
  std::string test(argv[1]);
  std::cout << "IsUniqueNoHash:\t" << IsUniqueNoHash(test) << std::endl;
  std::cout << "IsUniqueHash:\t" << IsUniqueHash(test) << std::endl;
  return 0;
}
