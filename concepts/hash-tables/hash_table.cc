#include <iostream>
#include <string>
#include <vector>

struct Node
{
  int key;
  std::string value;
};

class HashTable
{
private:
  static const int NUM_OF_BUCKETS = 10;
  std::vector<std::vector<Node> > map;
public:
  HashTable() : map(NUM_OF_BUCKETS) {};
  std::string get(int key);
  void set(int key, const std::string &value);
};

std::string HashTable::get(int key)
{
  int hash_code = key % NUM_OF_BUCKETS;
  std::vector<Node> &bucket = map[hash_code];
  for(auto& node : bucket)
  {
    if(node.key == key) return node.value;
  }
  return nullptr;
}

void HashTable::set(int key, const std::string &value)
{
  int hash_code = key % NUM_OF_BUCKETS;
  Node node;
  node.key = key;
  node.value = value;
  map[hash_code].push_back(node);
}

int main()
{
  HashTable h;
  h.set(1, "Do I look lonely?\n");
  h.set(2, "I see the shadows on my face\n");
  h.set(3, "People have told me ");
  h.set(4, "I don't look the same\n");
  h.set(5, "Maybe I lost weight\n");
  h.set(6, "I'm playing hooky with the best of the best\n");
  h.set(7, "Put my heart on my chest ");
  h.set(8, "so that you can see it too\n");
  h.set(9, "I'm walking the long road, ");
  h.set(10, "watching the sky fall\n");
  h.set(11, "The lace in your dress ");
  h.set(12, "tingles my neck, ");
  h.set(13, "how do I live?\n");
  h.set(14, "\n");
  h.set(15, "The death of a bachelor\n");
  h.set(16, "Oh oh\n");
  h.set(17, "Letting the water fall\n");
  h.set(18, "The death of a bachelor\n");
  h.set(19, "Oh oh\n");
  h.set(20, "Seems so fitting for\n");
  h.set(21, "Happily ever after\n");
  h.set(22, "How could I ask for more?\n");
  h.set(23, "A lifetime of laughter\n");
  h.set(24, "At the expense of the death of a bachelor\n");

  for(int i = 1; i <= 24; ++i)
  {
    std::cout << h.get(i);
  }
  return 0;
}
