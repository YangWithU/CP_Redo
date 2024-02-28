#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
using i64 = int64_t;

int main() {
  int n; cin >> n;
  vector<i64> a(n + 1), cnt(2e5 + 10), zeros(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    for (i64 j = 2; j * j <= a[i]; j++) {
      i64 x = j * j;
      while (a[i] % x == 0) {
        a[i] /= x;
      }
    }
    cnt[a[i]]++;
    zeros[i] = zeros[i - 1] + (a[i] == 0); // 0要单独算: 0,0可以组
  }
  i64 ans = 0, zz = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] == 0) {
      zz += n - zeros[i];
    } else {
      ans += cnt[a[i]] - 1;
    }
  }
  cout << ans / 2 + zz;
  return 0;
}