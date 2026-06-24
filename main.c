#include <stdio.h> 
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
   printf ("sizeof (data) = %d\n", 
            sizeof (data));
   return EXIT_SUCCESS;
}
