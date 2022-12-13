int recursiveSum(int n) {
  if (n > 1) {
    return n + recursiveSum(n - 1);
  } else {
    return 1;
  }
}

