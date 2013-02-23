#include "bloom.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Bloom b;
  string w;
  b = Bloom();
  w = "abcd";
  b.setName(w);
  cout << b.getName() << endl;
  return 0;
}
