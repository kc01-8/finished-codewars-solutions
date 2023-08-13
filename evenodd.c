#include <stdbool.h>

bool is_even(double n) {
  // Check if the absolute value of the number is an integer
  if ((int)n == n) {
    // Check if the number is divisible by 2
    if ((int)n % 2 == 0) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
