#include "dsu.hpp"

UnionFind::UnionFind(int n_nodes) {
  parent = std::vector<int> (n_nodes, 0);
  size = std::vector<int> (n_nodes, 0);
  for (int i = 0; i < n_nodes; i++) {
    UnionFind::make_set(i);
  }
}

void UnionFind::make_set(int v) {
  parent[v] = v;
  size[v] = 1;
}

int UnionFind::find_set(int v) {
  if (parent[v] == v) return v;
  return parent[v] = find_set(v); // path compression
}

void UnionFind::union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a == b) return;
  if (size[a] < size[b]) std::swap(a, b);
  size[a] += size[b];
  parent[b] = a;
}
