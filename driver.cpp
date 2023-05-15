#include <iostream>
#include <vector>

void print_json(int *, int *);
void print_json_branchless(int *, int *);

void printChar(char c) {
  std::cout << c;
}

void printInt(int i) {
  std::cout << i;
}

int main() {
  std::vector<int> thing{1,2,3,4};
  print_json(&thing.front(), &thing.front()+thing.size());
  std::cout << std::endl;
  print_json_branchless(&thing.front(), &thing.front()+thing.size());
  std::cout << std::endl;
}
