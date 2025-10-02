//
// Created by jpfra on 01/10/25.
//

#ifndef ECOMMERCE_PUBLICACION_H
#define ECOMMERCE_PUBLICACION_H

#include <iostream>
#include <vector>
#include "Comentario.h"

class Publicacion {
    private:
    std::string imagen;
    std::string descripcion;
    int likes;
    std::vector<Comentario> comentarios;

public:
    Publicacion(std::string imagen, std::string descripcion);

    void darLike();
    void agregarComentario(const Comentario& comentario);

    std::string getImagen() const;
    std::string getDescripcion() const;
    int getLikes() const;
    std::vector<Comentario> getComentarios() const;

};

#endif //ECOMMERCE_PUBLICACION_H