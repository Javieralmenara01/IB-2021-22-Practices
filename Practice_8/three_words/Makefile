# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Javier Almenara
# @date 13 Nov 2021
# @brief Este programa compila los ficheros con extension .cc creados en la Practica08.

CXX = g++
CXXFLAGS = -O0 -Wall
LDFLAGS =

# Este programa compila los ficheros con extension .cc creados en la Practica08.

# Compila el fichero three_words.cc
three_words: three_words.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Limpia todos los archivos ejecutables creados.
clean:
	rm -rf a.out
	rm three_words