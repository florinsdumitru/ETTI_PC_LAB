// moodle ex 04 - countFigures recursively

int countFigures(unsigned n) {
  if (n / 10 != 0) {
    return 1 + countFigures(n / 10);
  } else {
    return 1;
  }
}

