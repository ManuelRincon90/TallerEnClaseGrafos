/*****************************************************************************************************************************
Fecha: 16 octubre 2024
Autor: Manuel Rincon
Tema: Taller Grafos Clase 1
Estructuras de datos
******************************************************************************************************************************/

#ifndef ARISTA_H
#define ARISTA_H

#include <memory>

template <typename T, typename W>
class Vertice; // Declaración anticipada

template <typename T, typename W>
class Arista {
public:
    std::shared_ptr<Vertice<T, W>> destino; // Note the use of Vertice<T, W>
    W peso;

    Arista(std::shared_ptr<Vertice<T, W>> dest, W peso);
};

#include "Arista.hxx"

#endif // ARISTA_H


