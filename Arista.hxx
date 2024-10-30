/*****************************************************************************************************************************
Fecha: 23 octubre 2024
Autor: Daniel Rosas
Tema: Taller Grafos Clase 2
Estructuras de datos
******************************************************************************************************************************/

#include "Arista.h"

template <typename T, typename W>
Arista<T, W>::Arista(std::shared_ptr<Vertice<T, W>> dest, W peso)
    : destino(dest), peso(peso) {}
