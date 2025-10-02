//
// Created by jpfra on 01/10/25.
//

#ifndef ECOMMERCE_COMENTARIO_H
#define ECOMMERCE_COMENTARIO_H

#include <string>

class Comentario {
private:
    std::string texto;
    std::string autorComentario;
public:
    Comentario(std::string texto, std::string autorComentario);


    std::string getTexto() const;
    std::string getAutorComentario() const;
};
#endif //ECOMMERCE_COMENTARIO_H