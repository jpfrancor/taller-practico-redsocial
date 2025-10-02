#include <iostream>
#include "Usuario.h"
#include "Publicacion.h"
#include "Comentario.h"

int main() {
   Usuario user1("Usnavy");
   Usuario user2("Alexa");
   Usuario user3("Pancracio25Destroyer");

   user1.crearPublicacion("orangutan.JPG", "Orangutan!");
   Publicacion post1 = user1.getPublicaciones().at(0); //n=0 es la primera posicion del vector que guarda todas las publicaciones

   user2.darLike(post1);
   user2.dejarComentario(post1, "Que lindooo!");

   user3.darLike(post1);
   user3.dejarComentario(post1, "Ayuda que");

   std::cout << "Publicacion de " << user1.getNombreDeUsuario() << ": " << std::endl;
   std::cout << "Imagen: " << post1.getImagen() << std::endl;
   std::cout << "Descripcion: " << post1.getDescripcion() << std::endl;
   std::cout << "Likes: " << post1.getLikes() << std::endl;
   for (const Comentario& comentario : post1.getComentarios()) { //Por cada comentario en el vector que guarda comentarios, imprima esto
      std::cout << comentario.getAutorComentario() << " comento: " << comentario.getTexto() << std::endl;
   }
   return 0;
}