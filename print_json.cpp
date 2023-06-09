#include <utility>

void printChar(char);
void printInt(int);

void print_json(int * pBegin, int *pEnd)
{
  if (pBegin == pEnd) {
    printChar('[');
    printChar(']');
    return;
  }
  bool saw = false;
  for( int * iter = pBegin; iter != pEnd; iter++ ) {
    if( !saw )
      printChar('[');
    else
      printChar(',');
    printInt(*iter);
    saw = true;
  }
  printChar(']');
}

void print_json_branchless(int * pBegin, int *pEnd)
{
  if (pBegin == pEnd) {
    printChar('[');
    printChar(']');
    return;
  }
  char y = '[';
  for( int * iter = pBegin; iter != pEnd; iter++ ) {
    char z = ',';
    printChar(std::exchange(y,z));
    printInt(*iter);
  }
  printChar(']');
}
