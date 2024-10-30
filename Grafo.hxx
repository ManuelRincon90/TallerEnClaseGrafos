/*****************************************************************************************************************************
Fecha: 23 octubre 2024
Autor: Daniel Rosas
Tema: Taller Grafos Clase 2
Estructuras de datos
******************************************************************************************************************************/

#include "Grafo.h"
#include <algorithm>

template <typename T, typename W>
void Grafo<T, W>::agregarVertice(T dato) {
    vertices[dato] = std::make_shared<Vertice<T, W>>(dato);
}

template <typename T, typename W>
void Grafo<T, W>::eliminarVertice(T dato) {
    if (vertices.find(dato) != vertices.end()) {
        // Eliminar la referencia a este vértice en las aristas de otros vértices
        for (auto& [_, vertice] : vertices) {
            vertice->eliminarArista(vertices[dato]);
        }
        vertices.erase(dato);
    }
}

template <typename T, typename W>
void Grafo<T, W>::actualizarVertice(T datoAntiguo, T datoNuevo) {
    auto it = vertices.find(datoAntiguo);
    if (it != vertices.end()) {
        it->second->dato = datoNuevo;
        vertices[datoNuevo] = it->second;
        vertices.erase(datoAntiguo);
    }
}

template <typename T, typename W>
void Grafo<T, W>::agregarArista(T origen, T destino, W peso) {
    if (vertices.find(origen) != vertices.end() && vertices.find(destino) != vertices.end()) {
        vertices[origen]->agregarArista(vertices[destino], peso);
    } else {
        std::cout << "Uno de los vértices no existe." << std::endl;
    }
}

template <typename T, typename W>
void Grafo<T, W>::eliminarArista(T origen, T destino) {
    if (vertices.find(origen) != vertices.end() && vertices.find(destino) != vertices.end()) {
        vertices[origen]->eliminarArista(vertices[destino]);
    } else {
        std::cout << "Uno de los vértices no existe." << std::endl;
    }
}

template <typename T, typename W>
void Grafo<T, W>::actualizarArista(T origen, T destino, W nuevoPeso) {
    if (vertices.find(origen) != vertices.end() && vertices.find(destino) != vertices.end()) {
        vertices[origen]->actualizarArista(vertices[destino], nuevoPeso);
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

template <typename T, typename W>
int Grafo<T, W>::obtenerCantidadVertices() const {
    return vertices.size();
}

template <typename T, typename W>
int Grafo<T, W>::obtenerCantidadAristas() const {
    int count = 0;
    for (const auto& par : vertices) {
        count += par.second->aristas.size();
    }
    return count / 2; // Dividimos entre 2 porque el grafo es no dirigido.
}

template <typename T, typename W>
std::shared_ptr<Vertice<T, W>> Grafo<T, W>::buscarVertice(T dato) const {
    auto it = vertices.find(dato);
    if (it != vertices.end()) {
        return it->second;
    }
    return nullptr;
}

template <typename T, typename W>
bool Grafo<T, W>::buscarArista(T origen, T destino) const {
    auto verticeOrigen = buscarVertice(origen);
    auto verticeDestino = buscarVertice(destino);
    if (verticeOrigen && verticeDestino) {
        return verticeOrigen->buscarArista(verticeDestino);
    }
    return false;
}


