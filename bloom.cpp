#include "bloom.h"
using namespace std;



Bloom::Bloom() {
}

Bloom::~Bloom() {
  //  delete s;
}

void Bloom::setName(string &st) {
  s = st; // Should this be *st?
}

std::string Bloom::getName() {
  return s;
}


