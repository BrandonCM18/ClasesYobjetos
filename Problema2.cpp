#include <iostream>
#include <string>

class Materia {
public:
    int Clave;
    std::string Nombre;
    std::string ProfesorTit;
    std::string LibroTexto;
};

int main() {
    Materia Programacion;
    Programacion.Clave = 1;
    Programacion.Nombre = "Programacion";
    Programacion.ProfesorTit = "Jairo Cain";
    Programacion.LibroTexto = "Fundamentos de la programacion";

    Materia BasesDatos;
    BasesDatos.Clave = 2;
    BasesDatos.Nombre = "Bases de Datos";
    BasesDatos.ProfesorTit = "Oscar Didier";
    BasesDatos.LibroTexto = "Bases de datos I";

    int opcion;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Cambiar clave de la materia de programacion\n";
        std::cout << "2. Cambiar nombre del maestro de Bases de Datos\n";
        std::cout << "3. Imprimir datos de la materia de Bases de Datos\n";
        std::cout << "4. Salir\n";
        std::cout << "Elija una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                int nuevaClave;
                std::cout << "Ingrese la nueva clave para la materia de Programacion: ";
                std::cin >> nuevaClave;
                Programacion.Clave = nuevaClave;
                std::cout << "Clave de la materia de Programacion actualizada.\n";
                break;
            case 2:
                std::cout << "Ingrese el nuevo nombre del maestro de Bases de Datos: ";
                std::cin.ignore();
                std::getline(std::cin, BasesDatos.ProfesorTit);
                std::cout << "Nombre del maestro de Bases de Datos actualizado.\n";
                break;
            case 3:
                std::cout << "Datos de Bases de Datos:\n";
                std::cout << "Clave: " << BasesDatos.Clave << "\n";
                std::cout << "Nombre: " << BasesDatos.Nombre << "\n";
                std::cout << "Maestro: " << BasesDatos.ProfesorTit << "\n";
                std::cout << "Libro de texto: " << BasesDatos.LibroTexto << "\n";
                break;
            case 4:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opcion invalida. Por favor ingrese una opcion correcta.\n";
        }
    } while (opcion != 4);

    return 0;
}


