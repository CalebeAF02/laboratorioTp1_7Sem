cmake_minimum_required(VERSION 3.10)
project(laboratorioTp1_7Sem)

# 1) Onde estão os headres
set(CMAKE_CXX_STANDARD 17)

include_directories(
        include
        include/dominios
)

# 3) Gerar o executavel
add_executable(laboratorioTp1_7Sem
        src/main.cpp

        #dominios
        src/dominios/dominios.cpp)
