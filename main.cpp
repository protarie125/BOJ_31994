#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;
ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string ans;
  ll mav = 0;
  for (auto i = 0; i < 7; ++i) {
    cin >> s >> n;
    if (mav < n) {
      mav = n;
      ans = s;
    }
  }
  cout << ans;

  return 0;
}