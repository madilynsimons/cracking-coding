#include <cstdlib>
#include <iostream>
#include <vector>

template <typename T>
class ArrayList
{
private:
  T* array;
  int size;
  int capacity;
public:
  ArrayList() : size(0), capacity(5)
  {
    array = (T*) malloc(sizeof(T) * (capacity+1));
  };
  void insert(T more);
  void print();
  T get(int i);
};

template <typename T>
void ArrayList<T>::insert(T more)
{
  if(size + 1 >= capacity)
  {
    capacity *= 2;
    T* new_array = (T*) malloc(sizeof(T) * (capacity+1));
    for(int i = 0; i < size; i++)
    {
      new_array[i] = array[i];
    }
    free(array);
    array = new_array;
  }

  array[size] = more;
  size++;
}

template <typename T>
void ArrayList<T>::print()
{
  for(int i = 0; i < size; ++i)
  {
    std::cout << array[i] <<std::endl;
  }
}

template <typename T>
T ArrayList<T>::get(int i)
{
  return array[i];
}

int main()
{
  ArrayList<int> list;

  std::vector<int> random_input(25);
  for(auto& n : random_input)
  {
    n = std::rand() % 50;
    list.insert(n);
  }

  int num_correct = 0;
  std::cout << "INPUT\tARRAYLIST\n";
  for(int i = 0; i < 25; i++)
  {
    std::cout << random_input[i] << "\t" << list.get(i) << std::endl;
    if(random_input[i] == list.get(i)) num_correct++;
  }

  std::cout << "------------------------------\n";

  double num_correct_double = static_cast<double>(num_correct);
  double percent_correct = (num_correct_double / 25.0) * 100.0;
  std::cout << "PERCENT CORRECT " << percent_correct << "%%" << std::endl;

  return 0;
}
