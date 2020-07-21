//
// Created by CABRIGI on 7/18/2020.
//

#ifndef TEORIA3_FUNCIONES_H
#define TEORIA3_FUNCIONES_H

#include "lib.h"

pair<vector<bool>, vector<vector<int>>> crear_automata();

void imprimir_automata(pair<vector<bool>, vector<vector<int>>> afd);

pair<vector<bool>, vector<vector<int>>> brzozowski(pair<vector<bool>, vector<vector<int>>> afd);

pair <vector<bool>, vector<vector<vector<int>>>> crear_afne(pair<vector<bool>, vector<vector<int>>> afd);

pair<vector<bool>, vector<vector<int>>> crear_afd(pair <vector<bool>, vector<vector<vector<int>>>> afne);

vector<int> get_llegada(pair <vector<bool>, vector<vector<vector<int>>>> afne, vector<int> entrada, int input);

pair<vector<bool>, vector<vector<int>>> hopcroft(pair<vector<bool>, vector<vector<int>>> afd);

bool verificar_equivalencia(pair<vector<bool>, vector<vector<int>>> afd, vector<vector<int>> equivalencia, int estado1, int estado2);

pair<vector<bool>, vector<vector<int>>> creador_0div2(int exponente);

pair<vector<bool>, vector<vector<int>>> creador_0div3(int exponente);

#endif //TEORIA3_FUNCIONES_H
