# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Javier Almenara
# @date 13 Nov 2021
# @brief Este programa compila los ficheros con extension .cc creados en la Practica08s.

CXX = g++
CXXFLAGS = -O0 -Wall
LDFLAGS =

# Este programa compila los ficheros con extension .cc creados en la Practica08s.

# Compila el fichero harmonic_numbers_2.cc
harmonic_numbers_2: harmonic_numbers_2.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Limpia todos los archivos ejecutables creados.
clean:
	rm -rf a.out
	rm harmonic_numbers_2