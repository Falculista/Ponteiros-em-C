#include <stdio.h>;
#include <stdlib.h>;
// instrução para o compilador permitir o uso da biblioteca padrão de entrada e saída
// ou seja, permite usar scanf (input de um dado) e printf (output)

// include: resumidamente é o comando para "usar" o arquivo que será dado a seguir
// <stdio.h>: Arquivo header usado para mostrar textos na tela e ler entradas do usuário.

// std: standard
// io: input e output
// .h: arquivo header

int main (void) {
   
   typedef struct {
      int dia, mes, ano; 
   } data;
   // typedef: atribui um apelido a um tipo já existente
   // struct: tipo que receberá o apelido
      // struct -> armazena varios dados diferentes em uma mesma variável
   // data: apelido que o tipo receberá
      // então: struct = data
   
   printf ("sizeof (data) = %d\n", sizeof (data)); // sizeof (data): mostra o tamanho do dado data
   return EXIT_SUCCESS; // encerra o programa
}

