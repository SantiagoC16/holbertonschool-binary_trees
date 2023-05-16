Hello Moto!

#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura del nodo
typedef struct Nodo {
    int valor;
    struct Nodo* izquierda;
    struct Nodo* derecha;
} Nodo;

// Función para crear un nuevo nodo
Nodo* crearNodo(int valor) {
    Nodo* nodo = (Nodo*)malloc(sizeof(Nodo));
    nodo->valor = valor;
    nodo->izquierda = NULL;
    nodo->derecha = NULL;
    return nodo;
}

// Función para insertar un nodo en el árbol binario
Nodo* insertarNodo(Nodo* raiz, int valor) {
    if (raiz == NULL) {
        // Si la raíz es nula, crea un nuevo nodo y hazlo raíz
        return crearNodo(valor);
    }

    if (valor < raiz->valor) {
        // Si el valor es menor que el valor de la raíz, ve a la subárbol izquierdo
        raiz->izquierda = insertarNodo(raiz->izquierda, valor);
    } else if (valor > raiz->valor) {
        // Si el valor es mayor que el valor de la raíz, ve al subárbol derecho
        raiz->derecha = insertarNodo(raiz->derecha, valor);
    }

    // Devuelve la raíz del árbol
    return raiz;
}

// Función para imprimir el árbol en orden
void imprimirEnOrden(Nodo* nodo) {
    if (nodo != NULL) {
        imprimirEnOrden(nodo->izquierda);
        printf("%d ", nodo->valor);
        imprimirEnOrden(nodo->derecha);
    }
}

// Función principal
int main() {
    Nodo* raiz = NULL;

    // Inserta nodos en el árbol
    raiz = insertarNodo(raiz, 50);
    raiz = insertarNodo(raiz, 30);
    raiz = insertarNodo(raiz, 20);
    raiz = insertarNodo(raiz, 40);
    raiz = insertarNodo(raiz, 70);
    raiz = insertarNodo(raiz, 60);
    raiz = insertarNodo(raiz, 80);

    // Imprime el árbol en orden
    printf("Árbol en orden: ");
    imprimirEnOrden(raiz);
    printf("\n");

    return 0;
}
hola
