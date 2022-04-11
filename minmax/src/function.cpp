#include "function.h"
/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */


std::pair<int,int> min_max( int V[], size_t n )
{
    if(n == 0) {
        return std::make_pair(-1, -1)
    };

    int menor_valor = V[0]; 
    int maior_valor = V[0]; 

    int menor_indice = 0;
    int maior_indice = 0;

    for(int i = 0; i < n; i++) {
        
        if(V[i] < menor_valor) {  
            menor_valor = V[i];
            menor_indice = i;
        }
        
        if(V[i] >= maior_valor) {
            maior_valor = V[i];
            maior_indice = i;
        } 
    }
    
    return std::make_pair(menor_indice, maior_indice); 
}
