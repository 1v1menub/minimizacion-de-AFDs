//
// Created by CABRIGI on 7/18/2020.
//

#include "funcionestime.h"

int main() {
    pair<vector<bool>, vector<vector<int>>> automatax;
    pair<vector<bool>, vector<vector<int>>> automataxb;
    automatax = crear_automata();
    //automatax = creador_0div(3, 7);
    automataxb = automatax;
    cout << endl << "AFD base: " << endl << endl;
    imprimir_automata(automatax);
    automatax = brzozowski(automatax);
    cout << endl << endl << "AFD minimizado Brzozowski: " << endl << endl;
    imprimir_automata(automatax);
    automatax = hopcroft(automatax);
    cout << endl << endl << "AFD minimizado Hopcroft: " << endl << endl;
    imprimir_automata(automatax);
    //prueba_brzd2();
    //prueba_hopd2();
    //prueba_brzd3();
    //prueba_hopd3();
}