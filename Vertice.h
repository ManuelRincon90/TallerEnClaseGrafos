/*****************************************************************************************************************************
Fecha: 23 octubre 2024
Autor: Daniel Rosas
Tema: Taller Grafos Clase 2
Estructuras de datos
******************************************************************************************************************************/

#ifndef VERTICE_H
#define VERTICE_H

#include <vector>
#include <memory>
#include <iostream>
#include <algorithm> // Incluir para std::remove_if
#include "Arista.h"

template <typename T, typename W>
class Vertice {
public:
    T dato;
    std::vector<std::shared_ptr<Arista<T, W>>> aristas;

    Vertice(T dato);
    void agregarArista(std::shared_ptr<Vertice<T, W>> destino, W peso);
    void eliminarArista(std::shared_ptr<Vertice<T, W>> destino);
    void actualizarArista(std::shared_ptr<Vertice<T, W>> destino, W nuevoPeso);
    void imprimir() const;
    bool buscarArista(std::shared_ptr<Vertice<T, W>> destino) const;
};

#include "Vertice.hxx"

#endif // VERTICE_H


