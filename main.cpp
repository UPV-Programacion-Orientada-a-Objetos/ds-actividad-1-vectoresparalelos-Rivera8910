#include <iostream>
#include <string>
using namespace std;

string *nombres, *paises, *disciplinas, *generos;
int *medallas;
int totalAtletas = 0;
void medallasPorPais() {
    string paisesUnicos[50];
    int medallasUnicos[50];
    int numPaises = 0;

    for (int i = 0; i < totalAtletas; i++) {
        bool encontrado = false;
        for (int j = 0; j < numPaises; j++) {
            if (paisesUnicos[j] == paises[i]) {
                medallasUnicos[j] += medallas[i];
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            paisesUnicos[numPaises] = paises[i];
            medallasUnicos[numPaises] = medallas[i];
            numPaises++;
        }
    }

    cout << "\nMedallas por país:\n";
    for (int i = 0; i < numPaises; i++) {
        cout << paisesUnicos[i] << ": " << medallasUnicos[i] << endl;
    }
}

void atletaConMasMedallas() {
    int maxMedallas = medallas[0];
    int indiceMax = 0;

    for (int i = 1; i < totalAtletas; i++) {
        if (medallas[i] > maxMedallas) {
            maxMedallas = medallas[i];
            indiceMax = i;
        }
    }

    cout << "\nAtleta con más medallas:\n";
    cout << "Nombre: " << nombres[indiceMax] << endl;
    cout << "Medallas: " << maxMedallas << endl;
}

void buscarAtleta() {
    string nombre;
    cout << "Ingrese nombre del atleta: ";
    cin >> nombre;

    for (int i = 0; i < totalAtletas; i++) {
        if (nombres[i] == nombre) {
            cout << "Atleta: " << nombres[i] << endl;
            cout << "País: " << paises[i] << endl;
            cout << "Medallas: " << medallas[i] << endl;
            return;
        }
    }
    cout << "Atleta no encontrado" << endl;
}
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
