#include <string>


#ifndef BLOOM_H
#define BLOOM_H

class Bloom {
 public:
  Bloom();
  ~Bloom();
  
  void setName (std::string &st);
  std::string getName();

 private:
  std::string s;
};

#endif // BLOOM_H
