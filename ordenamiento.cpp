//Este codigo solo corre en replit o en visual studio code por alguna razon no quiso compilar en la terminal de la Mac

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <chrono>
#include <cmath>
#include <fstream>
#include <numeric> // Necesario para usar std::accumulate
#include <vector>

#include "ordenamiento.h"

using namespace std;
using namespace std::chrono;

duration<double> crear_arreglo(int *A, int TAM_ARREGLO, int RANGO_MAX) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    for (int i = 0; i < TAM_ARREGLO; i++) {
        int x = rand() % RANGO_MAX;
        A[i] = x;
    }
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

duration<double> ordenar_insertion_sort(int *A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    insertion_sort(A, TAM_ARREGLO);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

duration<double> ordenar_selection_sort(int *A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    selection_sort(A, TAM_ARREGLO);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

duration<double> ordenar_bubblesort(int *A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    bubblesort(A, TAM_ARREGLO);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

duration<double> ordenar_merge_sort(int *A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    merge_sort(A, 0, TAM_ARREGLO - 1);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

duration<double> ordenar_quicksort(int *A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    quicksort(A, 0, TAM_ARREGLO - 1);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

int *copiar_arreglo(int A[], int n) {
    int *aux = new int[n];
    for (int i = 0; i < n; i++) {
        aux[i] = A[i];
    }
    return aux;
}

void mostrar_arreglo(int *A, int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

duration<double> ejecutarAlgoritmo(int *B, int tam, string opcion) {
    duration<double> tiempo;
    if (opcion == "is") {
        cout << "Iniciando ordenamiento con INSERTION SORT... ";
        tiempo = ordenar_insertion_sort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete[] B;
    } else if (opcion == "ss") {
        cout << "Iniciando ordenamiento con SELECTION SORT... ";
        tiempo = ordenar_selection_sort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete[] B;
    } else if (opcion == "bs") {
        cout << "Iniciando ordenamiento con BUBBLESORT... ";
        tiempo = ordenar_bubblesort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete[] B;
    } else if (opcion == "ms") {
        cout << "Iniciando ordenamiento con MERGE SORT... " << flush;
        tiempo = ordenar_merge_sort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete[] B;
    } else if (opcion == "qs") {
        cout << "Iniciando ordenamiento con QUICKSORT... " << flush;
        tiempo = ordenar_quicksort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete[] B;
    }

    cout << endl;

    return tiempo;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "\nSintaxis: ordenamiento <tamaño_arreglo> <número_arreglos_a_generar_y_ordenar>\n"
             << endl;
    } else {

        std::ofstream salida("Salida.txt");
        salida << "NUMERO DE ARREGLO \t INSERTION SORT \t SELECTION SORT \t BUBBLESORT \t MERGE SORT \t QUICKSORT" << endl;

        int TAM_ARREGLO = atoi(argv[1]);
        int NUM_ARREGLOS = atoi(argv[2]);
        int RANGO = 10 * TAM_ARREGLO;

        cout << "\n\tTAMAÑO DE ARREGLOS: " << TAM_ARREGLO << "\tNUMERO DE ARREGLOS: " << NUM_ARREGLOS << endl;

        string algoritmos[] = {"is", "ss", "bs", "ms", "qs"};
        vector<vector<double>> tiemposAlgoritmos(sizeof(algoritmos) / sizeof(algoritmos[0]), vector<double>(NUM_ARREGLOS));

        for (int i = 0; i < NUM_ARREGLOS; i++) {
            int *A = new int[TAM_ARREGLO];
            int *B = new int[TAM_ARREGLO];
            salida << "\t" << i + 1 << "\t""\t";

            duration<double> tiempo;
            duration<double> tiempo1;
            cout << "\n** NUMERO DE ARREGLO: " << i + 1 << " **" << endl;
            cout << "\nCreando arreglo aleatorio de tamaño " << TAM_ARREGLO << "...";
            tiempo = crear_arreglo(A, TAM_ARREGLO, RANGO);
            cout << "\tCreado. ";
            cout << "\tTiempo: " << tiempo.count() << "s" << endl
                 << "\n";

            for (size_t j = 0; j < sizeof(algoritmos) / sizeof(algoritmos[0]); j++) {
                B = copiar_arreglo(A, TAM_ARREGLO);
                tiempo1 = ejecutarAlgoritmo(B, TAM_ARREGLO, algoritmos[j]);
                tiemposAlgoritmos[j][i] = tiempo1.count();
                salida << tiemposAlgoritmos[j][i] << "\t""\t";
            }
            salida << endl;
        }

        // Calcular promedio y desviación estándar por algoritmo
        for (size_t j = 0; j < sizeof(algoritmos) / sizeof(algoritmos[0]); j++) {
            vector<double> tiemposAlgoritmo;
            for (int i = 0; i < NUM_ARREGLOS; i++) {
                tiemposAlgoritmo.push_back(tiemposAlgoritmos[j][i]);
            }

            double promedio = accumulate(tiemposAlgoritmo.begin(), tiemposAlgoritmo.end(), 0.0) / NUM_ARREGLOS;
            double sumaCuadrados = 0;

            for (int i = 0; i < NUM_ARREGLOS; i++) {
                sumaCuadrados += pow(tiemposAlgoritmo[i] - promedio, 2);
            }

            double desviacion = sqrt(sumaCuadrados / NUM_ARREGLOS);

            // Imprimir resultados por cada algoritmo
            cout << "\nPromedio de tiempos para " << algoritmos[j] << ": " << promedio << "s" << endl;
            cout << "Desviación estándar de tiempos para " << algoritmos[j] << ": " << desviacion << "s" << endl;
        }
    }

    return EXIT_SUCCESS;
}
