// moodle ex 03 - recursiveArrayMax

int recursiveArrayMax(int n, int v[n]) {
  if (n == 1) {
    return v[0];
  } else {
    int maxRec = recursiveArrayMax(n - 1, v);
    return (v[n - 1] > maxRec ? v[n - 1] : maxRec);
  }
}

