#include <bits/stdc++.h>

using namespace std;

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

  vector<int> prev(n, -1);
  queue<int> q;
  q.push(0);
  prev[0] = 0;
  while (q.size()) {
    int sz = q.size();
    while (sz--) {
      int ft = q.front();
      q.pop();
      for (auto e : adj[ft]) {
        if (prev[e] != -1) continue;
        q.push(e);
        prev[e] = ft;
        if (e + 1 == n) {
          int cur = e;
          vector<int> path{cur + 1};
          while (cur != 0) {
            cur = prev[cur];
            path.push_back(cur + 1);
          }
          cout << path.size() << endl;
          copy(path.rbegin(), path.rend(), ostream_iterator<int>(cout, " "));
          cout << endl;
          return 0;
        }
      }
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
