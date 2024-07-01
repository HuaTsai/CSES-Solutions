#include <bits/stdc++.h>

using namespace std;

struct UF {
  vector<int> par;
  int cnt;
  UF(int n) : par(n) {
    cnt = n;
    iota(par.begin(), par.end(), 0);
  }

  int find(int x) {
    if (par[x] != x)
      par[x] = find(par[x]);
    return par[x];
  }

  void unite(int x, int y) {
    int px = find(x), py = find(y);
    if (px == py)
      return;
    par[px] = py;
    --cnt;
  }

  bool isconnect(int x, int y) { return find(x) == find(y); }
};

int main() {
  int n, m;
  cin >> n >> m;

  UF uf(n);
  while (m--) {
    int a, b;
    cin >> a >> b;
    uf.unite(a - 1, b - 1);
  }
  cout << uf.cnt - 1 << endl;
  for (int i = 0; i < n; ++i) {
    if (!uf.isconnect(0, i)) {
      cout << 1 << " " << i + 1 << endl;
      uf.unite(0, i);
    }
  }
}
