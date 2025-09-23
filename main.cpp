#include <iostream>
#include <string>
using namespace std;

string *nombres, *paises, *disciplinas, *generos;
int *medallas;
int totalAtletas = 0;
void menu();
 int opcion;
    do {
        cout << "\n MENU " << endl;
        cout << "1. Buscar atleta" << endl;
        cout << "2. Medallas por país" << endl;
        cout << "3. Atleta con más medallas" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        switch(opcion) {
            case 1: cout << "Buscar atleta (pendiente)\n"; break;
            case 2: cout << "Medallas por país (pendiente)\n"; break;
            case 3: cout << "Atleta con más medallas (pendiente)\n"; break;
            case 4: cout << "Saliendo...\n"; break;
            default: cout << "Opción inválida\n";
        }
    } while(opcion != 4);
}

int main() {
    string archivo;
    cout << "Ingrese nombre del archivo: ";
    cin >> archivo;
    return 0;
}
