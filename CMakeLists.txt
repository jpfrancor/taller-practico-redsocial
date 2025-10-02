cmake_minimum_required(VERSION 4.0)
project(RedSocial)

set(CMAKE_CXX_STANDARD 20)

add_executable(eCommerce main.cpp
        Usuario.cpp
        Usuario.h
        Publicacion.cpp
        Publicacion.h
        Comentario.cpp
        Comentario.h
)
