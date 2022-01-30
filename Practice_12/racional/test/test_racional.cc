#include <gtest/gtest.h>
#include <cmath>

#include "racional.h"

/**
 * Test que comprueba el funcionamiento del constructor
 */
TEST(RacionalTest, constructor) {
  Racional racional;

  EXPECT_EQ(false, racional.numerador() == 1);
  EXPECT_EQ(true, racional.denominador() == 1);

  Racional racional2{2, 2};

  EXPECT_EQ(true, racional2.numerador() == 2);
  EXPECT_EQ(false, racional2.denominador() == 1); 
}

/**
 * Test que comprueba el funcionamiento del operador <
 */
TEST(RacionalTest, menorque) {
  Racional racional1{2, 1}, racional2{1, 2};

  EXPECT_EQ(true, racional2 < racional1);
  EXPECT_EQ(false, racional1 < racional2);
}

/**
 * Test que comprueba el funcionamiento del operador >
 */
TEST(RacionalTest, mayorque) {
  Racional racional1{3, 2}, racional2{1, 2};

  EXPECT_EQ(true, racional1 > racional2);
  EXPECT_EQ(false, racional2 > racional1);
}

/**
 * Test que comprueba el funcionamiento del operador ==
 */
TEST(RacionalTest, igualque) {
  Racional racional1{2, 4}, racional2{1, 2}, racional3{1, 1};

  EXPECT_EQ(true, racional1 == racional2);
  EXPECT_EQ(false, racional2 == racional3);
}


/**
 * Test que comprueba el funcionamiento del operador !=
 */
TEST(RacionalTest, diferencia) {
  Racional racional1{1, 2}, racional2{5, 4}, racional3{2, 4};

  EXPECT_EQ(true, racional1 != racional2);
  EXPECT_EQ(false, racional1 != racional3);
}


/**
 * Test que comprueba el funcionamiento del método racional
 */
TEST(RacionalTest, simplificar) {
  Racional racional1{1, 2}, racional2{5, 4}, racional3{2, 4};

  EXPECT_EQ(true, racional3.Simplificar() == racional1);
  EXPECT_EQ(false, racional2.Simplificar() == racional3);
}