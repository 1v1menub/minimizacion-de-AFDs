//
// Created by CABRIGI on 7/18/2020.
//

#include <algorithm>
#include "funciones.h"

pair<vector<bool>, vector<vector<int>>> crear_automata() {
    pair<vector<bool>, vector<vector<int>>> afd;
    vector<bool> vecf;
    vector<int> veccopy;
    vector<vector<int>> vect;
    int a;
    int n;
    bool tempf;
    int tempt;
    cout << "Ingrese numero de simbolos en el afabeto:" << endl;
    cin >> a;
    cout << "Ingrese numero de estados:" << endl;
    cin >> n;
    cout << "El estado q0 es el estado inicial" << endl;
    for(int i = 0; i < n; i++) {
        vecf.push_back(0);
    }
    for(int i = 0; i < n; i++) {
        veccopy.push_back(0);
    }
    for(int i = 0; i < a; i++) {
        vect.push_back(veccopy);
    }
    for(int i = 0; i < n; i++) {
        cout << "Es el estado q" << i << " final?" << endl;
        cin >> tempf;
        if(tempf) {
            vecf[i] = 1;
        }
        for(int j = 0; j < a; j++) {
            cout << "Ingrese transicion " << j << " de q" << i << endl << "q";
            cin >> tempt;
            vect[j][i] = tempt;
        }
    }
    afd.first = vecf;
    afd.second = vect;
    return afd;
}

void imprimir_automata(pair<vector<bool>, vector<vector<int>>> afd) {
    int n = afd.first.size();
    int a = afd.second.size();
    cout << "     |";
    for(int i = 0; i < a; i++) {
        cout << " " << i << " |";
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << "->";
        }
        else {
            cout << "  ";
        }
        if(afd.first[i]) {
            cout << "*";
        }
        else {
            cout << " ";
        }
        cout << "q" << i << "| ";
        for(int j = 0; j < a; j++) {
            cout << "q" << afd.second[j][i] << "| ";
        }
        cout << endl;
    }
}

pair<vector<bool>, vector<vector<int>>> brzozowski(pair<vector<bool>, vector<vector<int>>> afd) {
    pair <vector<bool>, vector<vector<vector<int>>>> afne;
    afne = crear_afne(afd);
    afd = crear_afd(afne);
    afne = crear_afne(afd);
    afd = crear_afd(afne);
    return afd;
}

pair <vector<bool>, vector<vector<vector<int>>>> crear_afne(pair<vector<bool>, vector<vector<int>>> afd) {
    pair <vector<bool>, vector<vector<vector<int>>>> afne;
    vector<bool> vecf;
    vector<vector<vector<int>>> vect;
    vector<vector<int>> veccopy;
    vector<int>veccopycopy;
    int n = afd.first.size();
    int a = afd.second.size();
    for(int i = 0; i < n + 1; i++) {
        veccopy.push_back(veccopycopy);
    }
    for(int i = 0; i < a + 1; i++) {
        vect.push_back(veccopy);
    }
    for(int i = 0; i < n + 1; i++) {
        if(i == 1) {
            vecf.push_back(1);
        }
        else {
            vecf.push_back(0);
        }
    }
    for(int i = 0; i < a + 1; i++) {
        for(int j = 0; j < n; j++) {
            if(i == a) {
                if(j == 0) {
                    for(int x = 0; x < n; x++) {
                        if(afd.first[x] == 1) {
                            vect[i][j].push_back(x + 1);
                        }
                    }
                }
            }
            else {
                vect[i][afd.second[i][j] + 1].push_back(j + 1);
            }
        }
    }
    afne.first = vecf;
    afne.second = vect;
    return afne;
}

pair<vector<bool>, vector<vector<int>>> crear_afd(pair <vector<bool>, vector<vector<vector<int>>>> afne) {
    pair<vector<bool>, vector<vector<int>>> afd;
    int a = afne.second.size();
    bool f = 0;
    bool rep = 0;
    vector<int> ea = {0};
    vector<int> et;
    ea = get_llegada(afne, ea , a - 1);
    vector<bool> vecf;
    vector<vector<int>> vect;
    vector<vector<vector<int>>> vecti;
    vector<vector<int>> estados;
    vector<vector<int>> veccopy;
    vector<int> veccopycopy;
    for(int i = 0; i < a - 1; i++) {
        vecti.push_back(veccopy);
    }
    for(int i = 0; i < a - 1; i++) {
        vect.push_back(veccopycopy);
    }
    estados.push_back(ea);
    for(int i = 0; i < estados.size(); i++) {
        if(i > 0) {
            ea = estados[i];
        }
        for(int j = 0; j < a - 1; j++) {
            et = get_llegada(afne, ea, j);
            vecti[j].push_back(et);
            for(int y = 0; y < estados.size(); y++) {
                if(et == estados[y]) {
                    rep = 1;
                }
            }
            if(!rep) {
                estados.push_back(et);
            }
            rep = 0;
        }
    }
    int ne = estados.size();
    for(int i = 0; i < ne; i++) {
        f = 0;
        for (int j = 0; j < estados[i].size(); j++) {
            if (estados[i][j] == 1) {
                f = 1;
            }
        }
        vecf.push_back(f);
    }
    for(int i = 0; i < a - 1; i++) {
        for(int j = 0; j < ne; j++) {
            for(int x = 0; x < ne; x++) {
                if(vecti[i][j] == estados[x]) {
                    vect[i].push_back(x);
                }
            }
        }
    }
    afd.first = vecf;
    afd.second = vect;
    return afd;
}

vector<int> get_llegada(pair<vector<bool>, vector<vector<vector<int>>>> afne, vector<int> entrada, int input) {
    vector<int> llegada;
    int e;
    bool rep = 0;
    for(int i = 0; i < entrada.size(); i++) {
        e = entrada[i];
        for(int j = 0; j < afne.second[input][e].size(); j++) {
            for(int x = 0; x < llegada.size(); x++) {
                if(afne.second[input][e][j] == llegada[x]) {
                    rep = 1;
                }
            }
            if(!rep) {
                llegada.push_back(afne.second[input][e][j]);
            }
            rep = 0;
        }
    }
    sort(llegada.begin(), llegada.begin() + llegada.size());
    return llegada;
}


pair<vector<bool>, vector<vector<int>>> hopcroft(pair<vector<bool>, vector<vector<int>>> afd) {
    int n = afd.first.size();
    int t = 0;
    int iter = 0;
    int target = 0;
    vector<vector<vector<int>>> equivalencias;
    vector<int> veccopycopy;
    vector<vector<int>> veccopy;
    for(int i = 0; i < n; i++) {
        veccopy.push_back(veccopycopy);
    }
    equivalencias.push_back(veccopy);
    equivalencias[0][0].push_back(0);
    for(int i = 1; i < n; i++) {
        if(afd.first[i] == afd.first[0]) {
            equivalencias[0][0].push_back(i);
        }
        else {
            equivalencias[0][1].push_back(i);
        }
    }
    while(equivalencias.size() == 1 || equivalencias[iter] != equivalencias[iter - 1]) {
        equivalencias.push_back(equivalencias[iter]);
        t = 0;
        iter++;
        for(int i = 0; i < equivalencias[iter].size(); i++) {
            if(!equivalencias[iter][i].empty()) {
                t++;
            }
            else {
                break;
            }
        }
        for(int i = 0; i < t; i++) {
            for(int j = 0; j < equivalencias[iter][i].size() - 1; j++) {
                if(!verificar_equivalencia(afd, equivalencias[iter - 1], equivalencias[iter][i][j], equivalencias[iter][i][j + 1])) {
                    for(int x = t; x < n; x++) {
                        if(equivalencias[iter][x].empty() || verificar_equivalencia(afd, equivalencias[iter - 1], equivalencias[iter][x][0], equivalencias[iter][i][j + 1])) {
                            if(target == 0) {
                                target = x;
                            }
                        }
                    }
                    equivalencias[iter][target].push_back(equivalencias[iter][i][j + 1]);
                    equivalencias[iter][i].erase(equivalencias[iter][i].begin() + (j + 1));
                    target = 0;
                    j--;
                }
            }
        }
    }
    pair<vector<bool>, vector<vector<int>>> afd1;
    vector<bool> vecf;
    int ne = 0;
    for(int i = 0; i < equivalencias[iter].size(); i++) {
        if(!equivalencias[iter][i].empty()) {
            ne++;
        }
    }
    for(int i = 0; i < ne; i++) {
        vecf.push_back(0);
    }
    for(int i = 0; i < vecf.size(); i++) {
        if(afd.first[equivalencias[iter][i][0]] == 1) {
            vecf[i] = 1;
        }
    }
    vector<vector<int>> vect;
    for(int i = 0; i < afd.second.size(); i++) {
        vect.push_back(veccopycopy);
    }
    for(int i = 0; i < afd.second.size(); i++) {
        for(int j = 0; j < ne; j++) {
            for(int x = 0; x < ne; x++) {
                for(int y = 0; y < equivalencias[iter][x].size(); y++) {
                    if(afd.second[i][j] == equivalencias[iter][x][y]) {
                        vect[i].push_back(x);
                    }
                }
            }
        }
    }
    afd1.first = vecf;
    afd1.second = vect;
    return afd1;
}

bool verificar_equivalencia(pair<vector<bool>, vector<vector<int>>> afd, vector<vector<int>> equivalencia, int estado1, int estado2) {
    int a = afd.second.size();
    int tran1;
    int tran2;
    vector<bool> flags {0, 0};
    bool flagf;
    int cont = 0;
    int n = 0;
    for(int i = 0; i < equivalencia.size(); i++) {
        if(!equivalencia[i].empty()) {
            n++;
        }
    }
    if(afd.first[estado1] == afd.first[estado2]) {
        flagf = 1;
    }
    for(int i = 0; i < a; i++) {
        tran1 = afd.second[i][estado1];
        tran2 = afd.second[i][estado2];
        for(int j = 0; j < n; j++) {
            for(int x = 0; x < equivalencia[j].size(); x++) {
                if(tran1 == equivalencia[j][x]) {
                    flags[0] = 1;
                }
                if(tran2 == equivalencia[j][x]) {
                    flags[1] = 1;
                }
            }
            if(flags[0] && flags[1]) {
                cont++;
            }
            flags[0] = 0;
            flags[1] = 0;
        }
    }
    if(cont == a && flagf) {
        return 1;
    }
    else {
        return 0;
    }
}

pair<vector<bool>, vector<vector<int>>> creador_0div(int div, int exponente) {
    pair<vector<bool>, vector<vector<int>>> afd;
    vector<bool> vecf;
    vector<int> veccopy;
    vector<vector<int>> vect;
    for(int i = 0; i < 2; i++) {
        vect.push_back(veccopy);
    }
    int n = pow(div, exponente);
    for(int i = 0; i < n; i++) {
        if(i % div == 0) {
            vecf.push_back(1);
        }
        else {
            vecf.push_back(0);
        }
    }
    for(int j = 0; j < n; j++) {
        if(j + 1 == n) {
            vect[0].push_back(0);
        }
        vect[0].push_back(j + 1);
    }
    for(int i = 0; i < n; i++) {
        vect[1].push_back(i);
    }
    afd.first = vecf;
    afd.second = vect;
    return afd;
}

