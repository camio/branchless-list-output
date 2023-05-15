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
  std::vector<int> v{1,2,3,4};
  print_json(&v.front(), &v.front()+v.size());
  std::cout << std::endl;
  print_json_branchless(&v.front(), &v.front()+v.size());
  std::cout << std::endl;
}
