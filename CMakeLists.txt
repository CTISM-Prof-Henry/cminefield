# esse arquivo é apenas necessário se você estiver programando com o CLion.
# Caso você use o Codeblocks, você pode ignorá-lo.

cmake_minimum_required(VERSION 3.21)
project(cminefield C)

set(CMAKE_C_STANDARD 23)

include_directories(include)

add_executable(cminefield src/main.c)
add_executable(cores src/cores.c)

