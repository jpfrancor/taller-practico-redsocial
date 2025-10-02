//
// Created by jpfra on 01/10/25.
//

#include "Comentario.h"

#include <iostream>
#include <string>

Comentario::Comentario(std::string texto, std::string autorComentario) : texto(texto), autorComentario(autorComentario){}

std::string Comentario::getTexto() const {
    return texto;
}

std::string Comentario::getAutorComentario() const {
    return autorComentario;
}
