#include <cstdio>

#include <stdexcept>
using ull = unsigned long long;
constexpr ull MaxN = 8000000000;
/**
 * @brief Sum of all the multiples of 3 or 5 below n.
 * @complexity Time: O(1), Memory: O(1)
 * 
 * @param n in [0, 8000000000]
 * @return answer 
 */
ull solve1(ull n) {
  if (n > MaxN) {
    throw std::out_of_range("Out of range [0, 8000000000]");
  }
  n--;
  return n / 3 * (n / 3 + 1) / 2 * 3 -
    n / 15 * (n / 15 + 1) / 2 * 15 +
    n / 5 * (n / 5 + 1) / 2 * 5;
}

int main() {
  std::printf("%llu\n", solve1(1000));
  return 0;
}