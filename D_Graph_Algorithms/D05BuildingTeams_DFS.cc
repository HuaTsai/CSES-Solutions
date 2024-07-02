#include <bits/stdc++.h>

using namespace std;

void dfs(const vector<vector<int>> &adj, vector<int> &group, bool &ok, int i, int g) {
  if (!ok || group[i] == g) return;
  if (group[i] == 3 - g) {
    ok = false;
    return;
  }
  group[i] = g;
  for (auto e : adj[i]) {
    dfs(adj, group, ok, e, 3 - g);
    if (!ok) break;
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n);
  while (m--) {
    int a, b;
    cin >> a >> b;
    adj[a - 1].push_back(b - 1);
    adj[b - 1].push_back(a - 1);
  }

  vector<int> group(n);
  bool ok = true;
  for (int i = 0; i < n; ++i) {
    if (group[i]) continue;
    dfs(adj, group, ok, i, 1);
    if (!ok) {
      cout << "IMPOSSIBLE" << endl;
      return 0;
    }
  }
  copy(group.begin(), group.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
}
