//
// Created by CABRIGI on 7/18/2020.
//

#include "funcionestime.h"

int main() {
    pair<vector<bool>, vector<vector<int>>> a;
    pair<vector<bool>, vector<vector<int>>> b;
    a = crear_automata();
    //automatax = creador_0div(3, 7);
    b = a;
    cout << endl << "AFD base: " << endl << endl;
    imprimir_automata(a);
    a = brzozowski(a);
    cout << endl << endl << "AFD minimizado Brzozowski: " << endl << endl;
    imprimir_automata(a);
    b = hopcroft(b);
    cout << endl << endl << "AFD minimizado Hopcroft: " << endl << endl;
    imprimir_automata(b);
    //prueba_brzd2();
    //prueba_hopd2();
    //prueba_brzd3();
    //prueba_hopd3();
}