#include <iostream>
#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

namespace complex_numbers {
  class Complex {
   public:
    Complex() : real_{0}, imag_{0} {}
    Complex(const double real, const double imag) : real_{real}, imag_{imag} {}
    /// Getters
    double real() const { return real_; } 
    double imag() const { return imag_; }
    double abs() const;
    Complex conj() const;
    Complex exp() const;
   private:
    double real_;
    double imag_;
  };
  Complex operator+(const Complex& complex1, const Complex& complex2);
  Complex operator-(const Complex& complex1, const Complex& complex2);
  Complex operator*(const Complex& complex1, const Complex& complex2);
  Complex operator/(const Complex& complex1, const Complex& complex2);
}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
