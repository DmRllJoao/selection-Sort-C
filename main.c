#include <stdio.h>
#include <stdlib.h>



int main()
{
   int array[10], i, d, posicao, troca;
    int n = 10;

   printf("Digite 10 números\n", n);

   for ( i = 0 ; i < n ; i++ )
      scanf("%d", &array[i]);

   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      posicao = i;

      for ( d = i + 1 ; d < n ; d++ )
      {
         if ( array[posicao] > array[d] )
            posicao = d;
      }
      if ( posicao != i )
      {

         troca = array[i];
         array[i] = array[posicao];
         array[posicao] = troca;
      }
   }

   printf("A ordem ficou dessa maneira:\n");

   for ( i = 0 ; i < n ; i++ )
      printf("%d\n", array[i]);

   return 0;
}
