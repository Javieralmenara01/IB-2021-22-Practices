#include <gtest/gtest.h>
#include <cmath>

#include "fecha.h"

/**
 * Test que comprueba el funcionamiento del constructor
 */
TEST(FechaTest, constructor) {
  Fecha fecha1;
  
  EXPECT_EQ(true, fecha1.day() == 01);
  EXPECT_EQ(false, fecha1.month() != 01);
  EXPECT_EQ(true, fecha1.year() == 0000);
  
  Fecha fecha2{11, 11, 2011};

  EXPECT_EQ(true, fecha2.day() == 11);
  EXPECT_EQ(false, fecha2.month() == 0);
  EXPECT_EQ(true, fecha2.year() == 2011);
}

/**
 * Test que prueba si se cambian de forma correcta una cadena
 */
TEST(FechaTest, cambiarbarras) {
  std::string fecha_barras {"28/10/2021"};
  std::string fechas_puntos{"28.10.2021"};

  EXPECT_EQ(true, ChangeLines(fecha_barras) == "28 10 2021");
  EXPECT_EQ(false, ChangeLines(fechas_puntos) == "28 10 2021");
}

/**
 * Test que comprueba si la funcion que considera si las fechas
 * son correctas o no funciona de forma correcta
 */
TEST(FechaTest, compruebafecha) {
  Fecha fecha1{07, -12, 2021}, fecha2{12, 12, 2020};

  EXPECT_EQ(false, IsValidDate(fecha1) == true);
  EXPECT_EQ(true, IsValidDate(fecha2) == true);
}

/**
 * Test que comprueba si la funcion que considera los años bisiestos
 */
TEST(FechaTest, bisiesto) {
  Fecha fecha1{10, 12, 2004}, fecha2{23, 11, 1998}, result;

  EXPECT_EQ(true, result.LeapYear(fecha1));
  EXPECT_EQ(false, result.LeapYear(fecha2));
}

/**
 * Test que comprueba si una fecha es mayor que otra
 */
TEST(FechaTest, mayor) {
  Fecha fecha1{10, 12, 2004}, fecha2{23, 11, 1998};

  EXPECT_EQ(true, fecha1 > fecha2);
  EXPECT_EQ(false, fecha2 > fecha1);
}

/**
 * Test que comprueba si una fecha es menor que otra
 */
TEST(FechaTest, menor) {
  Fecha fecha1{10, 12, 2004}, fecha2{23, 11, 1998};

  EXPECT_EQ(true, fecha2 < fecha1);
  EXPECT_EQ(false, fecha1 < fecha2);
}

/**
 * Test que comprueba si una fecha es igual que otra
 */
TEST(FechaTest, igual) {
  Fecha fecha1{10, 12, 2004}, fecha2{10, 12, 2004}, fecha3{12, 10, 2004};

  EXPECT_EQ(true, fecha1 == fecha2);
  EXPECT_EQ(false, fecha2 == fecha3);
}

/**
 * Test que comprueba si se posponen los días de forma correcta
 */
TEST(FechaTest, posponer) {
  Fecha fecha1{28, 02, 2004}, fecha2{29, 02, 2004}, fecha3{01, 03, 2004};
  
  EXPECT_EQ(true, fecha1.PosponerDias(1) == fecha2);
  EXPECT_EQ(false, fecha1.PosponerDias(1) == fecha3);
}