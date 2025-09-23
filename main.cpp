#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string archivo = "data1.csv";
    
    ifstream file(archivo);
    
    if (!file.is_open()) {
        cout << "NO se pudo abrir el archivo " << archivo << endl;
    } else {
        cout << "SI se pudo abrir el archivo " << archivo << endl;
        
        string linea;
        getline(file, linea);  // Leer primera línea
        
        int pos = linea.find(',');  // Encontrar primera coma
        string primerNombre = linea.substr(0, pos);  // Extraer antes de la coma
        
        cout << "Primer nombre: " << primerNombre << endl;
        
        file.close();
    }
    
    return 0;
}
