#ifndef ATCODER_FENWICKTREE_HPP
#define ATCODER_FENWICKTREE_HPP 1

#include "atcoder/internal_type_traits"

namespace atcoder {

// Reference: https://en.wikipedia.org/wiki/Fenwick_tree
template <class T> struct fenwick_tree {
  public:
    fenwick_tree();
    explicit fenwick_tree(int n);

    void add(int p, T x);

    T sum(int l, int r);
};

}  // namespace atcoder

#endif  // ATCODER_FENWICKTREE_HPP
