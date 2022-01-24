cmake_minimum_required(VERSION 3.5)
project(completer VERSION 0.1 LANGUAGES CXX )


### Executável
# Diretório contendo os .hpp
include_directories( include )

add_executable( completer
                src/completer.cpp
                src/processador.cpp
                src/interface.cpp
                src/bancodd.cpp)

# The end

