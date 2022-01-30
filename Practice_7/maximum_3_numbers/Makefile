# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Javier Almenara
# @date 13 Nov 2021
# @brief Este programa compila los ficheros con extension .cc creados en la Practica07s.

CXX = g++
CXXFLAGS = -O0 -Wall
LDFLAGS =

# Este programa compila los ficheros con extension .cc creados en la Practica07s.

# Compila el fichero maximum_3_numbers_jutge.cc
maximum_3_numbers_jutge: maximum_3_numbers_jutge.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Limpia todos los archivos ejecutables creados.
clean:
	rm -rf a.out
	rm maximum_3_numbers_jutge
