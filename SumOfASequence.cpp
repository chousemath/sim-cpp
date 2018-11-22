#include <assert.h>

int sequenceSum(int start, int end, int step) {
  if (start > end) {
    return 0;
  }
  int sum = 0;
  for (int i = start; i <= end; i += step) {
    sum += i;
  }
  return sum;
}

int main() {
  assert(sequenceSum(2, 1, 2) == 0);
  assert(sequenceSum(2, 2, 2) == 2);
  assert(sequenceSum(2, 6, 2) == 12);
  assert(sequenceSum(1, 5, 1) == 15);
  assert(sequenceSum(1, 5, 3) == 5);
  return 0;
}