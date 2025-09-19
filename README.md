[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/k5lR_F86)
# Práctica: Heapsort (Max‑Heap)

## Descripción

Completa una implementación de **Heapsort** basada en **Max‑Heap**. Se proporciona un esqueleto con `main` y prototipos; tu trabajo consiste **únicamente** en escribir tres funciones.

## Archivos y estructura

* `heapsort.c`: contiene `main` y los **prototipos**.
* **No** crees archivos adicionales ni modifiques el nombre del archivo base.

## Tareas a completar

Implementa **desde cero** estas funciones (firmas obligatorias):

```c
void max_heapify(int a[], int n, int i);
void build_max_heap(int a[], int n);
void heap_sort(int a[], int n);
```

* **No modifiques** `main`, ni las firmas, ni el tipo de los parámetros.
* La salida debe ser el arreglo **en orden ascendente** (usa Max‑Heap).

## Formato de E/S

* **Entrada (stdin)**: primero `n` (entero > 0), luego `n` enteros.
* **Salida (stdout)**: los `n` enteros **ordenados ascendentemente**, separados por espacio y con salto de línea final.
* Proporciona una serie de ejemplos que demuestren el funcionamiento correcto de la implementación.

**Ejemplo (solo formato):**

```
Entrada
5
9 4 7 1 3

Salida
1 3 4 7 9
```

## Requisitos y restricciones

* Implementación **in‑place** (sin arreglos auxiliares de tamaño `n`).
* Complejidad esperada: **O(n log n)**.
