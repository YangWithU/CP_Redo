#include <iostream>
#include <map>
using namespace std;

int main() {
  map<char, int> m1, m2;
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    m1[s[i]]++;
    m2[s[i]] = i + 1;
  }
  for (auto& x : m1) {
    if (x.second == 1) {
      cout << m2[x.first];
      break;
    }
  }
  return 0;
}