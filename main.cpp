//Author: Brigitte Rollain
//GitHub: https://github.com/brollain745/GuidedPractice1_CreatingClasses.git
//October 23, 2020
//CSIS 123A
#include "fraction.h"

int main() {
  Fraction f1;
  Fraction f2;
  Fraction frac3;
  f1.setFraction(1,2);
  f2.setFraction(3,4);
  frac3 = f1.add(f2);
  frac3.printFraction();
  frac3 = f1.multiply(f2);
  frac3.printFraction();
  frac3 = f1.divide(f2);
  frac3.printFraction();
  return 0;
}
