//
// Created by CABRIGI on 7/18/2020.
//

#include "funciones.h"

int main() {
    pair<vector<bool>, vector<vector<int>>> automatax;
    pair<vector<bool>, vector<vector<int>>> automataxb;
    automataxb.first = automatax.first;
    automataxb.second = automatax.second;
    automatax = crear_automata();
    cout << endl << "AFD base: " << endl << endl;
    imprimir_automata(automatax);
    automatax = hopcroft(automatax);
    cout << endl << endl << "AFD minimizado Hopcroft: " << endl << endl;
    imprimir_automata(automatax);
    automataxb = brozowski(automatax);
    cout << endl << endl << "AFD minimizado Brozowski: " << endl << endl;
    imprimir_automata(automataxb);
}