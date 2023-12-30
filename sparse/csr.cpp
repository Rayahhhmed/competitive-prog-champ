#include <algorithm>
#include <iostream>
#include <vector>

int main () { 
  std::vector<int> a {1, 2, 3};
  std::vector<int> b {1, 2, 3};
  std::cout << (a == b) << '\n';

  return 0;
}
