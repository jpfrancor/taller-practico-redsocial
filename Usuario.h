//
// Created by jpfra on 01/10/25.
//

#ifndef ECOMMERCE_USUARIO_H
#define ECOMMERCE_USUARIO_H
#include "Publicacion.h"
class Usuario {
private:
    std::string nombreDeUsuario;
    std::vector<Publicacion> publicaciones;

public:
    Usuario(std::string nombreDeUsuario);

    void crearPublicacion(const std::string& imagen, const std::string& descripcion);
    void darLike(Publicacion& publicacion);
    void dejarComentario(Publicacion& publicacion, const std::string& texto);

    std::string getNombreDeUsuario() const;
    std::vector<Publicacion> getPublicaciones() const;
};
#endif //ECOMMERCE_USUARIO_H