#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5;

int main(void)
{
    int entrada = 0;
    int contador_negativos = 0;
    int cont = 0;

    while(cont < SIZE){
        cin >> std::ws >> entrada;
        if (entrada < 0) {
            contador_negativos++;
        }
    }

   cout << contador_negativos << std::endl;

    return 0;
}
