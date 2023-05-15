#include <iostream>
#include <vector>
#include <utility>

int main()
{
  std::vector<int> thing{1,2,3,4};
  char y = '[';
  for( auto x: thing ) {
    char z = ',';
    std::cout << std::exchange(y, z) << x;
  }
  std::cout << ']' << std::endl;
}
