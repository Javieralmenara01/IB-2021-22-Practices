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

# Compila el fichero data_type.cc
data_types: data_types.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Compila el fichero change_case.cc
change_case: change_case.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Compila el fichero references.cc
references: references.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Compila el fichero boolean_operator.cc
boolean_operator: boolean_operator.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Compila el fichero arithmetic_operations
arithmetic_operations: arithmetic_operations.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Compila el fichero short_circuit.cc
short_circuit: short_circuit.cc
	$(CXX) $(CXXFLAGS) -o $@ $^ $(CFLAGS)

# Uso de la regla de patrón estático
programas = data_types change_case references boolean_operator arithmetic_operations short_circuit
all: $(programas)

# Limpia todos los archivos ejecutables creados.
clean:
	rm -rf *.out
	rm -rf a.out

