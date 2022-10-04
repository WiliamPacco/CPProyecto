// CPProyecto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <fstream>

//LLama clase de cifrado
#include "Claves.h"
using namespace std;


struct Persona {
    char Claves[8];
};

int main()
{

    //Paso0 : Guardar en binarios 
    ofstream salida;
    salida.open("Claves.bin", ios::binary);
    Persona p = { "123456" };
    //Paso0.1 : Cifrar
    string nuevo = Cesar::Cifrar("123456", 14);

    //salida.write((char*)&p, sizeof(Persona));
    salida.write((char*)&nuevo, sizeof(Persona));
   // Persona p1 = { "Martin2" };
    //salida.write((char*)&p1, sizeof(Persona));
    salida.close();

    //Paso1 : Abrir binarios
    ifstream entrada;
    entrada.open("Claves.bin", ios::binary);
    while (entrada.read((char*)&p, sizeof(Persona))) {
        cout << p.Claves << endl;
    }
    entrada.close();
  
    //Paso4 : Cifra
   // string nuevo = Cesar::Cifrar("Martin", 14);
    
   //Paso3 : Crear Login
    std::cout << "BIENVENIDO A MI SISTEMAS DE VENTAS ISIL \n";
    std::cout << "--------------------------------------- \n";

    string usuario , pass;
    std::cout << "Ingrese el usuario: " << std::endl;
    std::cin >> usuario;
    std::cout << "Ingrese la Clave: " << std::endl;
    std::cin >> pass;


     //string nuevo2 = Cesar::Descifrar("", 26);

  /* std::cout << pass << "\n";
   std::cout << p.Claves << "\n";*/
   /*
    std::cout << nuevo2 << "\n";
    std::cout << p.Claves << "\n";*/

   if (pass == "123456") {
        std::cout << "INGRESO CON EXITO";
    }
    else {
        std::cout << "CONTRASENIA INVALIDA";
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
