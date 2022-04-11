#include "function.h"

std::vector<unsigned int> fib_below_n(unsigned int n)

{
    int termo_1 = 1, termo_2 = 1, p_termo = 0;

    vector<unsigned int> vect;

    for (int i = 1; i <= n; ++i) {

        if(i == 1) {
            vect.push_back(termo_1);
            continue;
        }

        if(i == 2) {
            vect.push_back(termo_2);
            continue;
        }

        p_termo = termo_1 + termo_2;

        vect.push_back(p_termo);

        termo_1 = termo_2;
        termo_2 = p_termo;
        

    }
    
    return vect;
}