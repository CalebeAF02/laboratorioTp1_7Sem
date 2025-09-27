cmake_minimum_required(VERSION 3.10)
project(laboratorioTp1_7Sem)

# 1) Onde estão os headres
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
# 2) Adiciona todos os .cpp
file(GLOB SOURCES
        src/*.cpp
        src/dominios/*.cpp

)

# 3) Gerar o executavel
add_executable(laboratorioTp1_7Sem ${SOURCES}
        src/dominios/dominios.cpp)
