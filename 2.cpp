#include <cstdio>

#include <stdexcept>
using ull = unsigned long long;
constexpr ull Max = 4200160415121876738llu; // Fibonacci[93]/3
/**
 * @brief considering the terms in the Fibonacci sequence whose values 
 * do not exceed x, returns the sum of the even-valued terms.
 * Time Complexity: O(log x), Space Complexity: O(1)
 * 
 * @param x in [0, 4200160415121876738]
 * @return sum of the even-valued terms
 */
ull solve2(ull x) {
  if (x > Max || x < 0) {
    throw std::out_of_range("out of range [0, 4200160415121876738]");
  }
  if (x < 2) {
    return 0;
  }
  ull now = 2, last = 1, ans = 0;
  while (now <= x) {
    ull tmp = last;
    last = now;
    now = now + tmp;
    if (last % 2 == 0) {
      ans += last;
    }
  }
  return ans;
}

int main() {
  std::printf("%llu\n", solve2(4000000));
  return 0;
}