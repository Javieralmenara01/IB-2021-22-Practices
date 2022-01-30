# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Javier Almenara
# @date 28 Oct 202
# @brief

CXX = g++
CXXFLAGS = -O0 -Wall        
LDFLAGS =                                               

# Este programa compila los ficheros con extension .cc creados en la Practica05.

# Compila el fichero references.cc
references: references.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Limpia todos los archivos ejecutables creados.
clean:
	rm -rf *.out
	rm -rf a.out
	rm references
