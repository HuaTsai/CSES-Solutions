#include <bits/stdc++.h>

using namespace std;

constexpr int dirs[5] = {0, 1, 0, -1, 0};

void dfs(vector<vector<char>> &room, int i, int j, int n, int m) {
  for (int k = 0; k < 4; ++k) {
    int ii = i + dirs[k], jj = j + dirs[k + 1];
    if (ii < 0 || ii >= n || jj < 0 || jj > m)
      continue;
    if (room[ii][jj] == '.') {
      room[ii][jj] = '#';
      dfs(room, ii, jj, n, m);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> room(n, vector<char>(m));
  for (auto &row : room)
    for (auto &c : row)
      cin >> c;

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (room[i][j] == '.') {
        ++ans;
        dfs(room, i, j, n, m);
      }
    }
  }
  cout << ans << endl;
}
