#include <iostream>
#include <sstream>

// O(n)
std::string URLify(std::string str, int length)
{
  int url_length;
  int num_of_spaces = 0;
  for(int i = 0; i < length; ++i)
  {
    if(str[i] == ' ') ++num_of_spaces;
  }
  url_length = length + num_of_spaces*2;

  int j = url_length - 1;
  // traverse through old string
  for(int i = length - 1; i >= 0; --i)
  {
    if(str[i] != ' ')
    {
      str[j] = str[i];
      j--;
    }else
    {
      str[j] = '0';
      j--;
      str[j] = '2';
      j--;
      str[j] = '%';
      j--;
    }
  }
  return str;
}

int main()
{
  std::string input = "Mr John Smith           ";
  std::string output = URLify(input, 13);
  std::cout << output << std::endl;
  return 0;
}
