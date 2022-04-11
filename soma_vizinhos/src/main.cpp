/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m = 0; 
    int n = 0;
    int soma = 0;  
    int inicio = 0;

    while(std::cin >> m >> n) {
        inicio = m;
        soma = 0;

        if(n > 0) { 

            for(int i = 0; i < n; i++) {
                soma += inicio;
                inicio++;
            }

        } else if(n < 0) {
            int valor_absoluto = n * (-1);

            for(int i = 0; i < valor_absoluto; i++) {
                soma += inicio;
                inicio--;
            }
            
        } else {
            soma = m;
        } 

        std::cout << soma << std::endl;
    }

    return 0;
}
