#include <cstdlib>
#include <iostream>
#include <vector>

class StringBuilder
{
private:
  char* str;
  int size;
  int capacity;
public:
  StringBuilder() : size(0), capacity(5)
  {
    str = (char*) malloc(sizeof(char) * (capacity+1));
  };
  void append(char* more, int n);
  void print();
};

void StringBuilder::append(char* more, int n)
{
  if(size + n >= capacity)
  {
    capacity *= 2;
    char* new_str = (char*) malloc(sizeof(char) * (capacity+1));
    for(int i = 0; i < size; i++)
    {
      new_str[i] = str[i];
    }
    free(str);
    str = new_str;
  }

  for(int i = 0; i < n; i++)
  {
    str[size] = more[i];
    size++;
  }
}

void StringBuilder::print()
{
  for(int i = 0; i < size; ++i)
  {
    std::cout << str[i];
  }
  std::cout << '\n';
}

int main()
{
  StringBuilder s;
  char* hello = (char*) malloc(sizeof(char) * (5+1));
  hello[0] = 'h';
  hello[1] = 'e';
  hello[2] = 'l';
  hello[3] = 'l';
  hello[4] = 'o';
  char* world = (char*) malloc(sizeof(char) * (7+1));
  world[0] = ' ';
  world[1] = 'w';
  world[2] = 'o';
  world[3] = 'r';
  world[4] = 'l';
  world[5] = 'd';
  world[6] = '!';
  s.append(hello, 5);
  s.append(world, 7);
  free(hello);
  free(world);
  s.print();

  return 0;
}
