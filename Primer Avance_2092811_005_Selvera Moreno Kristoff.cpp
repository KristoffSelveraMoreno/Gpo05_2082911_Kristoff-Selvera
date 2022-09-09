#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{

    int numarticulo, opcion, anolanzamiento, impuesto;
    float precioUni, total;
    string descripción, genero, nombrevid;
    char clasif[3];

    cout << "\t ****Tienda**** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> numarticulo;
        cin.ignore();
        cout << "Ingrese el Nombre del videojuego\n";
        cin >> nombrevid;
        cin.ignore();
        cout << "Ingrese el Ano de lanzamiento\n";
        cin >> anolanzamiento;
        cin.ignore();
        cout << "Ingrese la clasificación\n";
        cin >> clasif;
        cin.ignore();
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();
    }

}