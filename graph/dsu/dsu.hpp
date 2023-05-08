#ifndef DSU_HPP
#define DSU_HPP
#include <vector>
#include <algorithm>

class UnionFind {
private:
  std::vector<int> parent;
  std::vector<int> size;
public:
  UnionFind(int n_nodes);
  void make_set(int v);
  int find_set(int v);
  void union_sets(int a, int b);
};

#endif // !DSU_HPP
