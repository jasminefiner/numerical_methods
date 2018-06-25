#include <stdio.h>
double extended_trapezoidal(double (*f)(double x), double min, double max, double e) {
  double h = max - min;
  double I1 = h / 2. * (f(max) + f(min));

  return I1;
}
