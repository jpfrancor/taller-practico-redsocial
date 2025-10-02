//
// Created by jpfra on 01/10/25.
//
#include "Publicacion.h"
#include <iostream>

Publicacion::Publicacion(std::string imagen, std::string descripcion) : imagen(imagen), descripcion(descripcion), likes(0){}

void Publicacion::darLike() {
    likes++;
}

void Publicacion::agregarComentario(const Comentario &comentario) {
    comentarios.push_back(comentario);
}

std::string Publicacion::getImagen() const {
    return imagen;
}

std::string Publicacion::getDescripcion() const {
    return descripcion;
}

int Publicacion::getLikes() const {
    return likes;
}

std::vector<Comentario> Publicacion::getComentarios() const {
    return comentarios;
}