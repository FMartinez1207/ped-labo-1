#include <iostream>

using namespace std;

void mostrarBalance(float balance);
void depositar(float &balance);
void retirar(float *balance);

int main() {
    float balance = 0;
    int op = 0;

    while (op != 4) {
        cout << "\n--- MENU CAJERO ---" << endl;
        cout << "1. Mostrar balance\n2. Depositar\n3. Retirar\n4. Salir\nOpcion: ";
        cin >> op;

        switch (op) {
            case 1:
                mostrarBalance(balance);
                break;

                case 2: depositar(balance);
                  break;

                  case 3: retirar(&balance);
                  break;
                  
            case 4:
                cout << "\nSaliendo del sistema..." << endl;
                break;
            default:
                cout << "Opcion invalida, intente de nuevo." << endl;
        }
    }

    return 0;
}