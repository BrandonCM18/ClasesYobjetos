#include <iostream>
#include <string>

class Empleado {
private:
    int clave;
    std::string nombre;
    std::string domicilio;
    double sueldo;
    std::string reportaA;

public:
    Empleado(int clave, const std::string& nombre, const std::string& domicilio, double sueldo, const std::string& reportaA)
        : clave(clave), nombre(nombre), domicilio(domicilio), sueldo(sueldo), reportaA(reportaA) {}

    void cambiarDomicilio(const std::string& nuevoDomicilio) {
        domicilio = nuevoDomicilio;
    }

    void actualizarSueldo(float porcentajeIncremento) {
        sueldo *= (1.0 + porcentajeIncremento / 100);
    }

    void imprimirDatos() {
        std::cout << "Clave: " << clave << "\n";
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Domicilio: " << domicilio << "\n";
        std::cout << "Sueldo: $" << sueldo << "\n";
        std::cout << "Reporta a: " << reportaA << "\n";
    }

    void cambiarPersonaReporta(const std::string& nuevaPersonaReporta) {
        reportaA = nuevaPersonaReporta;
    }
};

int main() {
    Empleado JefePlanta(1, "Brandon Chavez", "Isla Gomera, Guadalajara Jal.", 10000, "Gerente General");
    Empleado JefePersonal(2, "Maria Rocha",  "Rafael Lozada, Guadalajara Jal.", 7500, "Gerente General");

    int opcion;
    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Cambiar domicilio de un empleado\n";
        std::cout << "2. Actualizar sueldo de un empleado\n";
        std::cout << "3. Imprimir datos de un empleado\n";
        std::cout << "4. Cambiar persona a quien reporta un empleado\n";
        std::cout << "5. Salir\n";
        std::cout << "Ingrese opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            int clave;
            std::string nuevoDomicilio;
            std::cout << "Ingrese clave del empleado: ";
            std::cin >> clave;
            std::cout << "Ingrese nuevo domicilio: ";
            std::cin.ignore();
            std::getline(std::cin, nuevoDomicilio);
            if (clave == 1) {
                JefePlanta.cambiarDomicilio(nuevoDomicilio);
            } else if (clave == 2) {
                JefePersonal.cambiarDomicilio(nuevoDomicilio);
            }
        } else if (opcion == 2) {
            int clave;
            double porcentajeIncremento;
            std::cout << "Ingrese clave del empleado: ";
            std::cin >> clave;
            std::cout << "Ingrese porcentaje de incremento: ";
            std::cin >> porcentajeIncremento;
            if (clave == 1) {
                JefePlanta.actualizarSueldo(porcentajeIncremento);
            } else if (clave == 2) {
                JefePersonal.actualizarSueldo(porcentajeIncremento);
            }
        } else if (opcion == 3) {
            int clave;
            std::cout << "Ingrese clave del empleado: ";
            std::cin >> clave;
            if (clave == 1) {
                JefePlanta.imprimirDatos();
            } else if (clave == 2) {
                JefePersonal.imprimirDatos();
            }
        } else if (opcion == 4) {
            int clave;
            std::string nuevaPersonaReporta;
            std::cout << "Ingrese clave del empleado: ";
            std::cin >> clave;
            std::cout << "Ingrese nueva persona a quien reporta: ";
            std::cin.ignore();
            std::getline(std::cin, nuevaPersonaReporta);
            if (clave == 1) {
                JefePlanta.cambiarPersonaReporta(nuevaPersonaReporta);
            } else if (clave == 2) {
                JefePersonal.cambiarPersonaReporta(nuevaPersonaReporta);
            }
        } else if (opcion == 5) {
            break;
        } else {
            std::cout << "Opcion invalida. Por favor, elija una opcion valida.\n";
        }
    }

    return 0;
}
