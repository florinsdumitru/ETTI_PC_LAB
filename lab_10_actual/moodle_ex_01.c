// moodle ex 01 - recursiveDotProduct

int recursiveDotProduct(int n, int v[n], int w[n]) {
  if (n == 1) {
    return v[0] * w[0];
  } else {
    int sum = v[n - 1] * w[n - 1];
    return sum + recursiveDotProduct(n - 1, v, w);
  }
}

