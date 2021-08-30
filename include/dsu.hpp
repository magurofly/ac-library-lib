#ifndef ATCODER_DSU_HPP
#define ATCODER_DSU_HPP 1

#include <vector>

namespace atcoder {

// Implement (union by size) + (path compression)
// Reference:
// Zvi Galil and Giuseppe F. Italiano,
// Data structures and algorithms for disjoint set union problems
struct dsu {
  public:
    dsu();
    explicit dsu(int n);

    int merge(int a, int b);

    bool same(int a, int b);

    int leader(int a);

    int size(int a);

    std::vector<std::vector<int>> groups();
};

}  // namespace atcoder

#endif  // ATCODER_DSU_HPP
