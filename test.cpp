}
if (nbrs.size() >= kConunter) {
  cout << nbrs.size();
} else {
  cout << kConunter;
}
cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
