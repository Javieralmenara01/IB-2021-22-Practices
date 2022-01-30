# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Javier Almenara
# @date 6 Nov 2021
# @brief

CXX = g++
CXXFLAGS = -O0 -Wall
LDFLAGS =

# Este programa compila los ficheros con extension .cc creados en la Practica06.

# Compila el fichero random_number.cc
random_number: random_number.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Limpia todos los archivos ejecutables creados.
clean:
	rm random_number
