// moodle ex 02 - removeFromArray recursively

int removeFromArray(int n, int v[n], int pos) {
  if (pos == n) {
    return n - 1;
  } else {
    v[pos] = v[pos + 1];
    return removeFromArray(n, v, pos + 1);
  }
}

