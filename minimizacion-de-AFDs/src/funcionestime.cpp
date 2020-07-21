//
// Created by CABRIGI on 7/20/2020.
//

#include "funcionestime.h"


void prueba_hopd2() {
    using namespace std::literals::chrono_literals;
    std::chrono::duration<float> duration;
    pair<vector<bool>, vector<vector<int>>> afd;
    afd = creador_0div(2, 1);
    auto start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    auto end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 2);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 3);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 4);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 5);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 6);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 7);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 8);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 9);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 10);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 11);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 12);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 13);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 14);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 15);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
}

void prueba_brzd2() {
    using namespace std::literals::chrono_literals;
    std::chrono::duration<float> duration;
    pair<vector<bool>, vector<vector<int>>> afd;
    afd = creador_0div(2, 1);
    auto start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    auto end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 2);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 3);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 4);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 5);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 6);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 7);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 8);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 9);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 10);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 11);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 12);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 13);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 14);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(2, 15);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
}

void prueba_hopd3() {
    using namespace std::literals::chrono_literals;
    std::chrono::duration<float> duration;
    pair<vector<bool>, vector<vector<int>>> afd;
    afd = creador_0div(3, 1);
    auto start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    auto end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 2);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 3);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 4);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 5);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 6);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 7);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 8);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 9);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 10);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 11);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 12);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 13);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 14);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 15);
    start = std::chrono::high_resolution_clock::now();
    hopcroft(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
}

void prueba_brzd3() {
    using namespace std::literals::chrono_literals;
    std::chrono::duration<float> duration;
    pair<vector<bool>, vector<vector<int>>> afd;
    afd = creador_0div(3, 1);
    auto start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    auto end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 2);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 3);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 4);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 5);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 6);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 7);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 8);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 9);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 10);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 11);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 12);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 13);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 14);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
    afd = creador_0div(3, 15);
    start = std::chrono::high_resolution_clock::now();
    brzozowski(afd);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    cout << duration.count() << endl;
}