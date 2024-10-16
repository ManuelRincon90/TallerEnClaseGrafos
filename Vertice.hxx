/*****************************************************************************************************************************
Fecha: 16 octubre 2024
Autor: Manuel Rincon
Tema: Taller Grafos Clase 1
Estructuras de datos
******************************************************************************************************************************/

#include "Vertice.h"

template <typename T, typename W>
Vertice<T, W>::Vertice(T dato) : dato(dato) {}

template <typename T, typename W>
void Vertice<T, W>::agregarArista(std::shared_ptr<Vertice<T, W>> destino, W peso) {
    aristas.push_back(std::make_shared<Arista<T, W>>(destino, peso)); // Use Arista<T, W>
}

template <typename T, typename W>
void Vertice<T, W>::imprimir() const {
    std::cout << "Vértice: " << dato << " tiene aristas a: ";
    for (const auto& arista : aristas) {
        // Assuming arista has a method or member to get the destination data
        std::cout << arista->destino->dato << " (peso: " << arista->peso << "), ";
    }
    std::cout << std::endl;
}


