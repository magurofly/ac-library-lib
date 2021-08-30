#ifndef ATCODER_CONVOLUTION_HPP
#define ATCODER_CONVOLUTION_HPP 1

#include <vector>

#include "atcoder/internal_bit"
#include "atcoder/modint"

namespace atcoder {

template <class mint, internal::is_static_modint_t<mint>* = nullptr>
std::vector<mint> convolution(std::vector<mint>&& a, std::vector<mint>&& b);

template <class mint, internal::is_static_modint_t<mint>* = nullptr>
std::vector<mint> convolution(const std::vector<mint>& a,
                              const std::vector<mint>& b);

template <unsigned int mod = 998244353,
          class T,
          std::enable_if_t<internal::is_integral<T>::value>* = nullptr>
std::vector<T> convolution(const std::vector<T>& a, const std::vector<T>& b);

std::vector<long long> convolution_ll(const std::vector<long long>& a,
                                      const std::vector<long long>& b);

}  // namespace atcoder

#endif  // ATCODER_CONVOLUTION_HPP