ll update(int idx, ll val) {
  ll ans = 0;
  for(idx += m; idx > 0; idx >>= 1)
    // Something
  return ans;
}

ll query(int l, int r) {
  l += m, r += m;
  ll ans = 0;
  while(l <= r) {
    if(l & 1) // Something
    if(r & 1 ^ 1) // Something
    l >>= 1, r >>= 1;
  }
  return ans;
}
