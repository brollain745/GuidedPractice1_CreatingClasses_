//
// Created by brigi on 10/23/2020.
//

#include "fraction.h"
#include <iostream>

using std::endl;
using std::cout;

void Fraction::setFraction(int n, int d) {
  num = n;
  den = d;
}
Fraction Fraction::add(const Fraction &f) {
  Fraction tmp;
  tmp.num = (num * f.den) + (f.num * den);
  tmp.den = f.den * den;
  return tmp;
}
Fraction Fraction::sub(const Fraction &f) {
  Fraction tmp;
  tmp.num = (num * f.den) - (f.num * f.den);
  tmp.den = f.den * den;
  return tmp;
}
Fraction Fraction::divide(const Fraction &f) {
  Fraction tmp;
  tmp.num = (f.num * den);
  tmp.den = f.den * num;
  return tmp;
}
Fraction Fraction::multiply(const Fraction &f) {
  Fraction tmp;
  tmp.num = (num * f.num);
  tmp.den = f.den * den;
  return tmp;
}

void Fraction::printFraction() {
  cout << num << "/" << den << endl;
}
