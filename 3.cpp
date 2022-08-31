#include <cstdio>

#include <stdexcept>
#include <cmath>
using ull = unsigned long long;
constexpr ull Max = 10000000000000000000llu; // 10^19
/**
 * @brief Find the largest prime factor of x.
 * Time Complexity: O(sqrt(x)), Space Complexity: O(1)
 * 
 * @param x in [2, 10**19]
 * @return ll the factor.
 */
ull solve3(ull x) {
  if (x < 2 || x > Max) {
    throw std::out_of_range("Out of range [2, 10**19].");
  }
  ull now = x, i = 2, ret = 1;
  ull lim = std::sqrt(static_cast<long double>(x));
  while (now != 1) {
    if (i > lim) {
      ret = now;
      break;
    }
    if ((i % 2 == 1 || i == 2) && now % i == 0) {
      while (now % i == 0) {
        now /= i;
      }
      ret = i;
    }
    i++;
  }
  return ret;
}

int main() {
  ull x;
  std::scanf("%llu", &x);
  std::printf("%llu\n", solve3(x));
  return 0;
}