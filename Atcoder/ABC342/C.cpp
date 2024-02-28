#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

// 我们只在乎最后替换的结果
// 所以维护一个表，记录替换过程
// 最后与原字符串对应即可

int main() {
  int n; cin >> n;
  string s; cin >> s;
  vector<int> p(26);
  for (int i = 0; i < 26; i++) {
    p[i] = i;
  }
  int q; cin >> q;
  for (int i = 0; i < q; i++) {
    string a, b; cin >> a >> b;
    int x = a[0] - 'a', y = b[0] - 'a';
    for (int i = 0; i < 26; i++) {
      if (p[i] == x) {
        p[i] = y;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << char('a' + p[s[i] - 'a']);
  }

  return 0;
}