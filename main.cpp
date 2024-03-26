#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
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

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

ll b, c, d;
vl B, C, D;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> b >> c >> d;

  auto sum = 0LL;

  B = vl(b);
  for (auto&& x : B) {
    cin >> x;
    sum += x;
  }

  C = vl(c);
  for (auto&& x : C) {
    cin >> x;
    sum += x;
  }

  D = vl(d);
  for (auto&& x : D) {
    cin >> x;
    sum += x;
  }

  sort(B.begin(), B.end(), greater());
  sort(C.begin(), C.end(), greater());
  sort(D.begin(), D.end(), greater());

  auto i = 0LL;
  auto ans = 0LL;
  while (i < b && i < c && i < d) {
    ans += ((B[i] + C[i] + D[i]) * 9) / 10;
    ++i;
  }

  for (auto j = i; j < B.size(); ++j) {
    ans += B[j];
  }

  for (auto j = i; j < C.size(); ++j) {
    ans += C[j];
  }

  for (auto j = i; j < D.size(); ++j) {
    ans += D[j];
  }

  cout << sum << '\n' << ans;

  return 0;
}