#include <stdio.h>

int main (void) {
  
   int i = 1234; 
   // cria uma variável i do tipo int
  
   printf (" i = %d\n", i); 
   // exibe o valor de i
  
   printf ("&i = %ld\n", (long int) &i); 
   // exibe o endereço na memória de i (&: endereço) como ld (inteiro grande)
   // // %ld: long decimal, exibe números decimais grandes (pois o endereço pode ser grande)
  
   printf ("&i = %p\n", (void *) &i);
   // imprime o endereço de i (&i) como um hexadecimal 
     // %p: permite exibir e ler o endereço de memória apontado por um ponteiro
     // (void *) [typecast]: devolve o endereço de  i como um endereço de memória genérico, sem um tipo específico (void)
  
   return EXIT_SUCCESS;
}
