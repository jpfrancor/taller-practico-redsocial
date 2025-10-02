//
// Created by jpfra on 01/10/25.
//
#include "Usuario.h"
#include "Comentario.h"
#include <iostream>

Usuario::Usuario(std::string nombreDeUsuario) : nombreDeUsuario(nombreDeUsuario) {}

void Usuario::crearPublicacion(const std::string& imagen, const std::string& descripcion) {
    publicaciones.emplace_back(imagen, descripcion);

}

void Usuario::dejarComentario(Publicacion& publicacion, const std::string& texto) {
    Comentario nuevo(texto, nombreDeUsuario);
    publicacion.agregarComentario(nuevo);
}

void Usuario::darLike(Publicacion& publicacion) {
    publicacion.darLike();
}

std::string Usuario::getNombreDeUsuario() const {
    return nombreDeUsuario;
}

std::vector<Publicacion> Usuario::getPublicaciones() const {
    return publicaciones;
}