#include <bits/stdc++.h>

using namespace std;

constexpr int dirs[5] = {0, 1, 0, -1, 0};

void dfs(vector<vector<char>> &mp, int i, int j, int n, int m) {
  for (int k = 0; k < 4; ++k) {
    int ii = i + dirs[k], jj = j + dirs[k + 1];
    if (ii < 0 || ii >= n || jj < 0 || jj > m)
      continue;
    if (mp[ii][jj] == '.') {
      mp[ii][jj] = '#';
      dfs(mp, ii, jj, n, m);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> mp(n, vector<char>(m));
  for (auto &r : mp)
    for (auto &e : r)
      cin >> e;

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (mp[i][j] == '.') {
        ++ans;
        dfs(mp, i, j, n, m);
      }
    }
  }
  cout << ans << endl;
}
