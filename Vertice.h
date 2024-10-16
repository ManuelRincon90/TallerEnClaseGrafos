/*****************************************************************************************************************************
Fecha: 16 octubre 2024
Autor: Manuel Rincon
Tema: Taller Grafos Clase 1
Estructuras de datos
******************************************************************************************************************************/

#ifndef VERTICE_H
#define VERTICE_H

#include <vector>
#include <memory>
#include <iostream>
#include "Arista.h"

template <typename T, typename W>
class Vertice {
public:
    T dato;
    std::vector<std::shared_ptr<Arista<T, W>>> aristas; // Note the use of Arista<T, W>

    Vertice(T dato);
    void agregarArista(std::shared_ptr<Vertice<T, W>> destino, W peso);
    void imprimir() const;
};



#include "Vertice.hxx"

#endif // VERTICE_H

