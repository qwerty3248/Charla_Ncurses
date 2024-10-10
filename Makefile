# Nombre del ejecutable
TARGET = Taller

# Compilador
CXX = g++

# Opciones del compilador
CXXFLAGS = -Wall -Wextra -std=c++11

# Librerías adicionales
LDFLAGS = -lncurses

# Archivo fuente
SRCS = Taller.cpp

# Regla principal
all: $(TARGET)

# Regla para compilar el ejecutable
$(TARGET): $(SRCS)
	@$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Limpiar los archivos compilados
clean:
	rm -f $(TARGET)

.PHONY: all clean

