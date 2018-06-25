#include <stdio.h>
#include "extended_trap.h"

double quadratic(double x) {
  return x * x + 4 * x + 4;
}

int main() {
  double x = quadratic(5);
  printf("%f\n", x);
  double integral = extended_trapezoidal(quadratic, 0., 2., 0.01);
  printf("%f", integral);

}
