/*****************************************************************************************************************************
Fecha: 16 octubre 2024
Autor: Manuel Rincon
Tema: Taller Grafos Clase 1
Estructuras de datos
******************************************************************************************************************************/

#include "Grafo.h"

int main() {
    Grafo<std::string, int> grafo;

    grafo.agregarVertice("A");
    grafo.agregarVertice("B");
    grafo.agregarVertice("C");

    grafo.agregarArista("A", "B", 5);
    grafo.agregarArista("A", "C", 10);
    grafo.agregarArista("B", "C", 2);

    grafo.imprimirGrafo();

    return 0;
}


