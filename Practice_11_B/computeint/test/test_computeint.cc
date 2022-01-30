#include <gtest/gtest.h>


#include "computeint.h"

/**
 * Test que comprueba el funcionamiento del miembro Factorial
 */
TEST(ComputeintTest, factorial) {
  ComputeInt result;

  EXPECT_EQ(true, result.Factorial(5) == 120);
  EXPECT_EQ(false, result.Factorial(1) == 0);
}

/**
 * Test que comprueba el funcionamiento del miembro SumSerie
 */
TEST(ComputeintTest, sumaserie) {
  ComputeInt result;

  EXPECT_EQ(true, result.SumSerie(29) == 435);
  EXPECT_EQ(false, result.SumSerie(2) == 2);
}

/**
 * Test que comprueba el funcionamiento del miembro IsPerfect
 */
TEST(ComputeintTest, numeroperfecto) {
  ComputeInt result;

  EXPECT_EQ(true, result.IsPerfect(28));
  EXPECT_EQ(false, result.IsPerfect(1));
}

/**
 * Test que comprueba el funcionamiento del miembro IsPrime
 */
TEST(ComputeintTest, numero) {
  ComputeInt result;

  EXPECT_EQ(true, result.IsPrime(13));
  EXPECT_EQ(false, result.IsPrime(98));
}

/**
 * Test que comprueba el funcionamiento del miembro IsPerfectPrime
 */
TEST(ComputeintTest, primoperfecto) {
  ComputeInt result;

  EXPECT_EQ(true, result.IsPerfectPrime(977));
  EXPECT_EQ(false, result.IsPerfectPrime(17));
}

/**
 * Test que comprueba el funcionamiento del miembro IsBalanced
 */
TEST(ComputeintTest, numerobalanceado) {
  ComputeInt result;

  EXPECT_EQ(true, result.IsBalanced(1463));
  EXPECT_EQ(false, result.IsBalanced(123));
}

/**
 * Test que comprueba el funcionamiento del miembro AreRelativePrimes
 */
TEST(ComputeintTest, primosrelativos) {
  ComputeInt result;
  EXPECT_EQ(true, result.AreRelativePrimes(14,25));
  EXPECT_EQ(false, result.AreRelativePrimes(12, 24));
}