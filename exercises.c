#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) { 
  int mayor = arr[0];
  for(size_t i = 1; i < size; i++) {
    if(mayor < arr[i]) {
       mayor = arr[i];
    }
  }
  return mayor;
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) {
  int inicio = 0;
  int final = size - 1;

  while(inicio < final) {
    int aux = arr[inicio];
    arr[inicio] = arr[final];
    arr[final] = aux;
    
    inicio++;
    final--;
  }
}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize) { 
  /* Se cuenta la cantidad de numeros pares totales para
     luego asignar la cantidad necesaria de memoria. */
  int cont = 0;
  for(size_t i = 0; i < size; i++) {
    if(arr[i] % 2 == 0) {
      cont++;
    }
  }
  
  int *newArr = (int *) malloc(sizeof(int) * cont);
  *newSize = 0;
  
  for(size_t i = 0; i < size; i++) {
    if(arr[i] % 2 == 0) {
      newArr[*newSize] = arr[i];
      (*newSize)++;
    }
  }
  return newArr;
}

/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2,
                       int result[]) {
  size_t i = 0;
  size_t j = 0;
  size_t k = 0;
  
  while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j]) {
      result[k] = arr1[i];
      i++;
    } else {
      result[k] = arr2[j];
      j++;
    }
    k++;
  }

  // copiar elementos sobrantes en el arreglo result[k]
  while (i < size1) {
    result[k] = arr1[i];
    i++;
    k++;
  }
  while (j < size2) {
    result[k] = arr2[j];
    j++;
    k++;
  }
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) {
  size_t i = 0;
  size_t j = 0;
  
  while(i < size && arr[i] <= arr[i + 1]) {
    if(i == size - 2) return 1;
    i++;
  }
  
  while(j < size && arr[j] >= arr[j + 1]) {
    if(j == size - 2) return -1;
    j++;
  }
  
  return 0;
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {
  struct Libro libro;
  strcpy(libro.titulo);
  strcpy(linro.autor.nombre);
  strcpy(linro.autor.anioNacimiento);
  strcpy(linro.anioPublicacion);
}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
