//
// Created by brigi on 10/23/2020.
//

#ifndef GUIDEDPRACTICE1_CREATINGCLASSES__FRACTION_H_
#define GUIDEDPRACTICE1_CREATINGCLASSES__FRACTION_H_

class Fraction {
 private:
  int num;
  int den;
 public:
  void setFraction(int n, int d);
  Fraction add(const Fraction &f);
  Fraction sub(const Fraction &f);
  Fraction multiply(const Fraction &f);
  Fraction divide(const Fraction &f);
  void printFraction();
};

#endif //GUIDEDPRACTICE1_CREATINGCLASSES__FRACTION_H_
