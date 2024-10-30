/*****************************************************************************************************************************
Fecha: 23 octubre 2024
Autor: Daniel Rosas
Tema: Taller Grafos Clase 2
Estructuras de datos
******************************************************************************************************************************/

#ifndef ARISTA_H
#define ARISTA_H

#include <memory>

template <typename T, typename W>
class Vertice; // Declaración anticipada con dos parámetros

template <typename T, typename W>
class Arista {
public:
    std::shared_ptr<Vertice<T, W>> destino;
    W peso;

    Arista(std::shared_ptr<Vertice<T, W>> dest, W peso);
};

#include "Arista.hxx"

#endif // ARISTA_H

