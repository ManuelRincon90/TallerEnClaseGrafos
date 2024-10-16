/*****************************************************************************************************************************
Fecha: 16 octubre 2024
Autor: Manuel Rincon
Tema: Taller Grafos Clase 1
Estructuras de datos
******************************************************************************************************************************/

#include "Grafo.h"

template <typename T, typename W>
void Grafo<T, W>::agregarVertice(T dato) {
    vertices[dato] = std::make_shared<Vertice<T, W>>(dato); // Use Vertice<T, W>
}

template <typename T, typename W>
void Grafo<T, W>::agregarArista(T origen, T destino, W peso) {
    if (vertices.find(origen) != vertices.end() && vertices.find(destino) != vertices.end()) {
        vertices[origen]->agregarArista(vertices[destino], peso);
        vertices[destino]->agregarArista(vertices[origen], peso); // Grafo no dirigido
    } else {
        std::cout << "Uno de los vértices no existe." << std::endl;
    }
}

template <typename T, typename W>
void Grafo<T, W>::imprimirGrafo() const {
    for (const auto& par : vertices) {
        par.second->imprimir();
    }
}


