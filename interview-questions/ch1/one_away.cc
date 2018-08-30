#include <cmath>
#include <iostream>
#include <string>
#include <vector>

// return one char is different
bool Replace(std::string lhs, std::string rhs)
{
  int how_many_different = 0;
  for(int i = 0; i < lhs.size(); ++i)
  {
    if(lhs[i] != rhs[i]) ++how_many_different;
  }
  return (how_many_different==1);
}

bool Insert(std::string lhs, std::string rhs)
{
  std::string longer;
  std::string shorter;

  if(lhs.size() > rhs.size())
  {
    longer = lhs;
    shorter = rhs;
  }else{
    longer = rhs;
    shorter = lhs;
  }

  int how_many_same = 0;
  int longer_i = 0;
  int shorter_i = 0;

  while(longer_i < longer.size() && shorter_i < shorter.size())
  {
    if(longer[longer_i] == shorter[shorter_i])
    {
      how_many_same++;
      longer_i++;
      shorter_i++;
    }
    else{
      longer_i++;
    }
  }
  return(how_many_same == shorter.size());
}

bool OneAway(std::string lhs, std::string rhs)
{
  int length_diff = lhs.size() - rhs.size();
  if(std::abs(length_diff) > 1) return false;

  if(lhs.size() == rhs.size())
  {
    if(lhs == rhs) return true;
    return Replace(lhs, rhs);
  }
  return Insert(lhs, rhs);
}

int main()
{
  std::vector<bool> outputs;
  outputs.push_back(OneAway("pale", "ple"));
  outputs.push_back(OneAway("pales", "pale"));
  outputs.push_back(OneAway("pale", "bale"));
  outputs.push_back(!OneAway("pale", "bake"));

  double correct = 0.0;
  for(int i = 0; i < outputs.size(); ++i)
  {
    if(outputs[i]) correct += 1.0;
  }

  std::cout << "PERCENT CORRECT " << (correct / 4.0)*100 << std::endl;

  return 0;
}
