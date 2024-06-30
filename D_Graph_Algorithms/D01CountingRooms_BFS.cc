#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> mp(n, vector<char>(m));
  for (auto &r : mp)
    for (auto &e : r) 
      cin >> e;

  auto isin = [n,m](int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
  };

  int ans = 0;
  queue<pair<int, int>> q;
  vector<int> dirs = {0, 1, 0, -1, 0};

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (mp[i][j] == '#')
        continue;
      ++ans;
      q.push({i, j});
      mp[i][j] = '#';
      while (q.size()) {
        int n = q.size();
        while (n--) {
          auto [r, c] = q.front();
          q.pop();
          for (int k = 0; k < 4; ++k) {
            int rr = r + dirs[k], cc = c + dirs[k + 1];
            if (isin(rr, cc) && mp[rr][cc] == '.') {
              q.push({rr, cc});
              mp[rr][cc] = '#';
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
}

