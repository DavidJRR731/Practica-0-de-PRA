# Configuración del compilador y flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g
TARGET=practica1

SRCS = PRACT1.cpp
OBJS = $(SRCS:.cpp=.o)

# Regla principal por defecto
all: $(TARGET)

# Enlace del ejecutable final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla de compilación para los archivos objeto
%.o: %.cpp PRACT1.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza de archivos generados
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
