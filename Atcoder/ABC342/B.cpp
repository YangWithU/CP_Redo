#include <iostream>
#include <map>
using namespace std;

int main() {
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    mp[x] = i;
  }
  int q; cin >> q;
  for (int i = 1; i <= q; i++) {
    int x, y; cin >> x >> y;
    cout << ((mp[x] > mp[y]) ? y : x) << '\n';
  }
  return 0;
}