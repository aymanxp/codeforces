#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  int pos;
  int health;
} Monster;

bool customComparison(Monster a, Monster b) { return abs(a.pos) < abs(b.pos); }

void propagaeBullets(int restK, int idx, vector<Monster> &monsters, int n) {
  if (restK == 0 || idx >= n)
    return;
  monsters[idx].health =
      ((monsters[idx].health - restK) > 0 ? (monsters[idx].health - restK) : 0);
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<Monster> monsters;
  for (int i = 0; i < n; ++i)
    cin >> monsters[i].pos;
  for (int i = 0; i < n; ++i) {
    cin >> monsters[i].health;
  }
  sort(monsters.begin(), monsters.end(), customComparison);
  int idx = 0;
  int sec = 0;
  while (idx < n && monsters[idx].pos > 0) {
    if (monsters[idx].health == 0) {
      ++idx;
      continue;
    }
    monsters[idx].pos -= k;
    ++sec;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
