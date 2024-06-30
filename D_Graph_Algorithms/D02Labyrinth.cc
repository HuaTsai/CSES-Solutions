#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> mp(n, vector<char>(m));
  auto isin = [n, m](int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
  };

  queue<pair<int, int>> q;
  int er = 0, ec = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> mp[i][j];
      if (mp[i][j] == 'A') {
        q.push({i, j});
      } else if (mp[i][j] == 'B') {
        er = i;
        ec = j;
      }
    }
  }

  vector<int> dirs_v = {0, 1, 0, -1, 0};
  vector<char> dirs = {'R', 'D', 'L', 'U'};

  bool found = false;
  while (q.size() && !found) {
    int n = q.size();
    while (n-- && !found) {
      auto [r, c] = q.front();
      q.pop();
      for (int k = 0; k < 4; ++k) {
        int rr = r + dirs_v[k], cc = c + dirs_v[k + 1];
        if (!isin(rr, cc))
          continue;
        if (mp[rr][cc] == '.') {
          q.push({rr, cc});
          mp[rr][cc] = dirs[k];
        } else if (mp[rr][cc] == 'A') {
          continue;
        } else if (mp[rr][cc] == 'B') {
          found = true;
          mp[rr][cc] = dirs[k];
          break;
        }
      }
    }
  }

  if (!found) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    int i = er, j = ec;
    string ans;
    while (mp[i][j] != 'A') {
      ans.push_back(mp[i][j]);
      if (mp[i][j] == 'R') {
        --j;
      } else if (mp[i][j] == 'D') {
        --i;
      } else if (mp[i][j] == 'L') {
        ++j;
      } else if (mp[i][j] == 'U') {
        ++i;
      }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    cout << ans << endl;
  }
}
