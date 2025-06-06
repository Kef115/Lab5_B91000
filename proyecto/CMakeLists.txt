cmake_minimum_required(VERSION 3.10)

# Declaramos que solo usaremos el lenguaje C
project(GeneradorJSONC LANGUAGES C)

# Estándar de C
set(CMAKE_C_STANDARD 99)

# Archivos fuente
set(SOURCES
    src/main.c
    src/json.c
    src/cJSON.c
)

# Incluir headers desde src/
include_directories(src)

# Crear ejecutable
add_executable(mi_programa ${SOURCES})
