/*****************************************************************************************************************************
Fecha: 23 octubre 2024
Autor: Daniel Rosas
Tema: Taller Grafos Clase 2
Estructuras de datos
******************************************************************************************************************************/

#include "Grafo.h"
#include <iostream>

int main() {
    Grafo<std::string, int> grafo;
    int opcion;
    std::string vertice, origen, destino, nuevoVertice;
    int peso, nuevoPeso;

    do {
        std::cout << "Menú:\n";
        std::cout << "1. Agregar vértice\n";
        std::cout << "2. Eliminar vértice\n";
        std::cout << "3. Actualizar vértice\n";
        std::cout << "4. Agregar arista\n";
        std::cout << "5. Eliminar arista\n";
        std::cout << "6. Actualizar arista\n";
        std::cout << "7. Imprimir grafo\n";
        std::cout << "8. Salir\n";
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Ingresa el nombre del vértice: ";
            std::cin >> vertice;
            grafo.agregarVertice(vertice);
            break;
        case 2:
            std::cout << "Ingresa el nombre del vértice a eliminar: ";
            std::cin >> vertice;
            grafo.eliminarVertice(vertice);
            break;
        case 3:
            std::cout << "Ingresa el vértice que deseas actualizar: ";
            std::cin >> vertice;
            std::cout << "Ingresa el nuevo nombre del vértice: ";
            std::cin >> nuevoVertice;
            grafo.actualizarVertice(vertice, nuevoVertice);
            break;
        case 4:
            std::cout << "Ingresa el vértice origen: ";
            std::cin >> origen;
            std::cout << "Ingresa el vértice destino: ";
            std::cin >> destino;
            std::cout << "Ingresa el peso de la arista: ";
            std::cin >> peso;
            grafo.agregarArista(origen, destino, peso);
            break;
        case 5:
            std::cout << "Ingresa el vértice origen de la arista a eliminar: ";
            std::cin >> origen;
            std::cout << "Ingresa el vértice destino de la arista a eliminar: ";
            std::cin >> destino;
            grafo.eliminarArista(origen, destino);
            break;
        case 6:
            std::cout << "Ingresa el vértice origen de la arista a actualizar: ";
            std::cin >> origen;
            std::cout << "Ingresa el vértice destino de la arista a actualizar: ";
            std::cin >> destino;
            std::cout << "Ingresa el nuevo peso de la arista: ";
            std::cin >> nuevoPeso;
            grafo.actualizarArista(origen, destino, nuevoPeso);
            break;
        case 7:
            grafo.imprimirGrafo();
            break;
        case 8:
            std::cout << "Saliendo...\n";
            break;
        default:
            std::cout << "Opción inválida. Intenta de nuevo.\n";
        }
        std::cout << std::endl;
    } while (opcion != 8);

    return 0;
}

