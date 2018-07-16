#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

// O(n log n)
bool PalindromeNoHash(std::string str)
{
  std::string sorted = str;
  sorted.erase(std::remove(sorted.begin(), sorted.end(), ' '), sorted.end());

  for(auto& c : sorted)
  {
    if(c < 'a'){
      c += 32;
    }
  }
  std::sort(sorted.begin(), sorted.end());

  int how_many_odds = 0;
  int count = 1;
  for(int i = 1; i < sorted.size() - 1; i++)
  {
    if(sorted[i] == sorted[i-1]) count++;
    else
    {
      if(count % 2 == 1) how_many_odds++; // there is an odd number
      count = 1; // reset count
    }
  }
  return (how_many_odds < 2);
}

// O(n)
bool PalindromeHash(std::string str)
{
  std::string str_lowercase = str;
  std::map<char, int> map;
  for(auto& c : str_lowercase)
  {
    if(c != ' ')
    {
      if(c < 'a') c+= 32;
      map[c]++;
    }
  }

  int how_many_odds = 0;
  for (std::map<char,int>::iterator it=map.begin(); it!=map.end(); ++it)
  {
    auto& repeat = it->second;
    if(repeat % 2 == 1) how_many_odds++;
  }

  return (how_many_odds < 2);
}

int main()
{
  std::vector<std::string> inputs;
  inputs.push_back("no X in Nixon");
  inputs.push_back("to idiot");
  inputs.push_back("diet coke");
  inputs.push_back("Evil olive");
  inputs.push_back("coca cola");

  inputs.push_back("Madame not one man is selfless I name not one madam");
  inputs.push_back("Max exam");
  inputs.push_back("Harry Potter and the Goblet of Fire");
  inputs.push_back("Ron OH Sex in a Toyota nixes honor");
  inputs.push_back("It's Always Sunny in Philadelphia");

  std::vector<bool> answers;
  answers.push_back(true);
  answers.push_back(true);
  answers.push_back(false);
  answers.push_back(true);
  answers.push_back(false);
  answers.push_back(true);
  answers.push_back(true);
  answers.push_back(false);
  answers.push_back(true);
  answers.push_back(false);

  double correct = 0.0;
  double length = static_cast<double>(inputs.size());

  for(int i = 0; i < length; ++i)
  {
    bool answer = answers[i];
    std::string input  = inputs[i];
    bool output_hash   = PalindromeHash(input);
    bool output_nohash = PalindromeNoHash(input);

    if(answer == output_hash && output_hash == output_nohash)
      correct += 1.0;
  }

  std::cout << "PERCENT CORRECT "<< (correct/length)*100 << std::endl;

  return 0;
}
