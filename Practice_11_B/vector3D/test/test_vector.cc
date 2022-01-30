#include <gtest/gtest.h>
#include <cmath>

#include "vector.h"

/**
 * Test para probar los constructores de la clase
 * No se comprueba la igualdad sobre números de tipo double por los
 * problemas de precisión.
 *
 * Se prueba que el valor devuelto sea igual al esperado por una diferencia
 * no mayor de epsilon (kEpsilon), un valor cercano a cero.
 * 
 * @See https://stackoverflow.com/questions/12278523/comparing-double-values-in-c
 *
 */
TEST(VectorTest, constructor) {
  const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
  Vector my_vector;

  EXPECT_EQ(true, my_vector.x() < kEpsilon);
  EXPECT_EQ(true, my_vector.y() < kEpsilon);
  EXPECT_EQ(true, my_vector.z() < kEpsilon);

  Vector another_vector{1.0, 2.0, 3.0};
  EXPECT_EQ(true, (my_vector.x() - 1.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.y() - 2.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.z() - 3.0 < kEpsilon));
}

/// Incluya tests adicionales para el resto de métodos de la clase



/**
 * Test que prueba si dos vectores son iguales
 * Hay que sobrecargar el operador de igualdad para comprobar este código
 */
TEST(VectorTest, iguales) {
  Vector v1{1.0, 2.0, 3.0};
  Vector v2{1.0, 2.0, 3.0};
  Vector v3{4.0, 5.0, 6.0};

  EXPECT_EQ(true, v1 == v2);
  EXPECT_EQ(false, v1 == v3);
}

/**
 * Test que prueba la suma de vectores
 * Hay que sobrecargar el operador de igualdad para comprobar este código
 */
TEST(VectorTest, suma) {
  Vector v1{1.0, 2.0, 3.0};
  Vector v2{4.0, 5.0, 6.0};
  Vector v_result{5.0, 7.0, 9.0};

  EXPECT_EQ(true, (v1 + v2) == v_result);
  EXPECT_EQ(false, (v1 + v2) == v1);
}


/**
 * Test que prueba la multiplicación de un vector por un real
 * Se comprueba cada elemento por el real
 */
TEST(VectorTest, multiplicacionreal) {
  Vector first_vector{4.0, 8.0, 12.0};

  EXPECT_EQ(true, first_vector.x() * 4.0 == 16.0);
  EXPECT_EQ(true, first_vector.y() * 4.0 == 32.0);
  EXPECT_EQ(true, first_vector.z() * 4.0 == 48.0);

  Vector second_vector{1.0, 2.0, 3.0};

  EXPECT_EQ(false, second_vector.x() * 1.0 == 2.0);
  EXPECT_EQ(false, second_vector.y() * 1.0 == 3.0);
  EXPECT_EQ(false, second_vector.z() * 1.0 == 4.0);
}

/**
 * Tests que prueba el producto escalar de dos vectores
 * Hay que sobrecargar el operador de igualdad para comprobar este código
 */
TEST(VectorTest, escalar) {
  Vector v1{1.0, 2.0, 3.0};
  Vector v2{3.0, 6.0, 9.0};
  Vector v3{0.0, 0.0, 0.0};

  EXPECT_EQ(true, (v1 * v2) == 42.0);
  EXPECT_EQ(false, (v1 * v3) == 1.0);
}

/**
 * Tests que prueba el modulo
 */
TEST(VectorTest, modulo) {
  Vector v1{1.0, 2.0, 3.0};
  Vector v2{4.5, 3.7, 2.2};

  EXPECT_EQ(true, v1.Modulo() == sqrt(14));
  EXPECT_EQ(false, v2.Modulo() == 0);
}

/**
 * Tests que prueba la normalización de vectores
 */
TEST(VectorTest, normalizar) {
  Vector vector{1.0, 2.0, 3.0};
  vector.Normalizar();

  EXPECT_EQ(false, vector.x() == 0.267261);
  EXPECT_EQ(false, vector.y() == 0.553183);
  EXPECT_EQ(false, vector.z() == 0.979668);
  
  Vector another_vector{1.0, 0.0, 0.0};
  another_vector.Normalizar();

  EXPECT_EQ(true, another_vector.x() == 1);
  EXPECT_EQ(true, another_vector.y() == 0);
  EXPECT_EQ(true, another_vector.z() == 0);
}