#include <gtest/gtest.h>
#include "complejo.h"
#include <cmath>

/**
 * Test que comprueba el comparador de igualdad
 */
TEST(ComplejoTest, igualar) {
  Complejo complejo1{1, 2}, complejo2{1, 2}, complejo3{3, 4};

  EXPECT_EQ(true, complejo1 == complejo2);
  EXPECT_EQ(false, complejo2 == complejo3);
}

/**
 * Test que comprueba el modulo de un vector 
 */
TEST(complejoTest, modulo) {
  Complejo complejo1{1, 2};

  EXPECT_EQ(true, complejo1.modulo() == sqrt(5));
  EXPECT_EQ(false, complejo1.modulo() == sqrt(4));
}

/**
 * Test que comprueba la suma de dos complejos
 */
TEST(ComplejoTest, suma) {
  Complejo complejo1{2, 8}, complejo2{1, 2};
  Complejo result1{3, 10}, result2{4, 9};

  EXPECT_EQ(true, (complejo1 + complejo2) == result1);
  EXPECT_EQ(false, (complejo2 + complejo1) == result2);
}

/**
 * Test que comprueba la resta de dos complejos
 */
TEST(ComplejoTest, resta) {
  Complejo complejo1{-7, 4}, complejo2{29, 8};
  Complejo result1{36, 4}, result2{2, 4};

  EXPECT_EQ(false, (complejo1 - complejo2) == result2);
  EXPECT_EQ(true, (complejo2 - complejo1) == result1);
}

/**
 * Test que comprueba la multiplicación de dos complejos
 */
TEST(ComplejoTest, multiplicacion) {
  Complejo complejo1{12, -3}, complejo2{4, 5};
  Complejo result1{63, 48}, result2{16, 2};

  EXPECT_EQ(false, (complejo1 * complejo2) == result2);
  EXPECT_EQ(true, (complejo1 * complejo2) == result1);
}

/**
 * Test que comprueba la multiplicación de dos complejos
 */
TEST(ComplejoTest, division) {
  Complejo complejo1{1, 2}, complejo2{1, 1};
  Complejo result{1.5, 0.5};

  EXPECT_EQ(true, (complejo1 / complejo2) == result);
  EXPECT_EQ(false, (complejo2 / complejo1) == result);
}