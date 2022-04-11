/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.
void checar_pontos(Ponto *P1, Ponto *P2) {

    Ponto auxiliar;

    if(!((P1->x < P2->x) || (P1->x == P2->x && P1->y < P2->y) || (P1->y == P2->y && P1->x < P2->x))) {
        auxiliar = *P1;
        *P1 = *P2;
        *P2 = auxiliar;
    }
}

int main(void) { 
    Ponto P;
    Ponto IE;
    Ponto SD;

    while(cin >> std::ws >> IE.x >> std::ws >> IE.y >> std::ws >> SD.x >> std::ws >> SD.y >> std::ws >> P.x >> std::ws >> P.y) {
        if(IE.x == SD.x && IE.y == SD.y) {
            std::cout << "invalid" << std::endl; 
        } else {
            checar_pontos(&IE, &SD);
            location_t result = pt_in_rect(IE, SD, P);

            if(result == 0) {
                std::cout << "inside" << std::endl;
            } else if(result == 1) {
                std::cout << "border" << std::endl;
            } else {
                std::cout << "outside" << std::endl;
            }
        }
    }

    return 0;
}
