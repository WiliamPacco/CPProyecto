// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iterator> // required for std::size
int main()
{
   // std::cout << "Hello World!\n";
    int ar[2];
    std::cout << "Ingrese los 10 numeros " << std::endl;
    for (int j = 0; j < 2; j++) {
        std::cin >> ar[j];
    }

    int arb[2];
    std::cout << "Ingrese los 2 numeros " << std::endl;
    for (int k = 0; k< 2; k++) {
        std::cin >> arb[k];
    }

    int arc[2];
    int aux = arc[0];

    int x, y;
    int j, i, band = 0, k = 0;
    for (i = 0; i < std::size(ar);i++) {
        for (j = 0;j < std::size(arb);j++) {
            if (ar[i] == arb[j]) {
                band = 1;
                break;
            }
            if (band == 0) {
                arc[k] = ar[i];
                aux = arc[k];
               // std::cout << "este: " << aux << std::endl;
                k++;
            }
            else { band = 0; }

        }
    }
    //std::size(arr);
    for (i = 0; i < std::size(arc);i++) {
        std::cout << "El numero que no se encuentran son : " << aux<< std::endl;
    }
       
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
