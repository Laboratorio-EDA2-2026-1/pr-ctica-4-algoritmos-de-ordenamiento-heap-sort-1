/*
 * Objetivo: Completar las funciones Max-Heapify, Build-Max-Heap y Heap-Sort.
 * Entradas (stdin):
 *   n

 *   a1 a2 ... an

 * Salida (stdout):
 *   a1 a2 ... an  // en orden ascendente
 */

#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPOS: NO CAMBIAR LAS FIRMAS */
void max_heapify(int a[], int n, int i);
void build_max_heap(int a[], int n);
void heap_sort(int a[], int n);
void swap(int *a, int *b);

/* MAIN de prueba mínima */
int main(void) {
    int n; 
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int *a = (int*)malloc(sizeof(int) * n);
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    heap_sort(a, n);

    for (int i = 0; i < n; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n');

    free(a);
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int a[], int n, int i) {
    int mayor = i;
    int izq = 2 * i + 1;
    int der = 2 * i + 2;

    if (izq < n && a[izq] > a[mayor]) {
        mayor = izq;
    }

    if (der < n && a[der] > a[mayor]) {
        mayor = der;
    } 

    if (mayor != i) { 
        swap(&a[mayor], &a[i]);
        max_heapify(a, n, mayor);
    }
}

void build_max_heap(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        max_heapify(a, n, i);
    }
}

void heap_sort(int a[], int n) {
    build_max_heap(a, n);

    for (int i = n - 1; i > 0; i--) {
        swap(&a[0], &a[i]);  // Intercambiar el mayor elemento (raíz) con el último

        max_heapify(a, i, 0);
    }
}
