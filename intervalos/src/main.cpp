/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(void)
{
    size_t SIZE = 5;
    int intervalos[5]{0, 0, 0, 0, 0};

    int x = 0;
    int contador = 0;

    while(cin >> std::ws >> x) {
        if(x >= 0 && x < 25) {
            intervalos[0]++;
        } else if(x >= 25 && x < 50) {
            intervalos[1]++;
        } else if(x >= 50 && x < 75) {
            intervalos[2]++;
        } else if(x >= 75 && x < 100) {
            intervalos[3]++;
        } else {
            intervalos[4]++;
        }
        contador++
    }

    for(int i = 0; i < SIZE; i++) {
        std::cout << std::setprecision(4) << ((float)intervalos[i]/(float)contador)*100 << std::endl;
    }
    
    return 0;
} 