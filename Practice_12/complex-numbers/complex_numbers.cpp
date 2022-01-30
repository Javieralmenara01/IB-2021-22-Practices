#include <iostream>
#include <cmath>
#include "complex_numbers.h"

namespace complex_numbers {
  Complex operator+(const Complex& complex1, const Complex& complex2) {
    Complex result{complex1.real() + complex2.real(), complex1.imag() + complex2.imag()};
    return result;
  }

  Complex operator-(const Complex& complex1, const Complex& complex2) {
    Complex result{complex1.real() - complex2.real(), complex1.imag() - complex2.imag()};
    return result;
  }

  Complex operator*(const Complex& complex1, const Complex& complex2) {
    Complex result{(complex1.real() * complex2.real()) - (complex1.imag() * complex2.imag()), 
                    (complex1.real() * complex2.imag()) + (complex1.imag() * complex2.real())};
    return result;
  }

  Complex operator/(const Complex& complex1, const Complex& complex2) {
    Complex result{((complex1.real() * complex2.real()) + (complex1.imag() * complex2.imag())) /
                   ((complex2.real() * complex2.real()) + (complex2.imag() * complex2.imag())), 
                   ((complex1.imag() * complex2.real()) - (complex1.real() * complex2.imag())) /
                   ((complex2.real() * complex2.real()) + (complex2.imag() * complex2.imag()))};
    return result;
  }

  double Complex::abs() const {
    return sqrt((real() * real()) + (imag() * imag()));
  }

  Complex Complex::conj() const {
    Complex result(real(), 0 - imag());
    return result;
  }

  Complex Complex::exp() const {
    return {std::exp(real()) * std::cos(imag()), std::exp(real()) *std::sin(imag())};;
  }
}  // namespace complex_numbers
