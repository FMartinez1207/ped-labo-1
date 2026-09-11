#include <iostream>

using namespace std;

void mostrarBalance(float balance) {
    cout << "\nSaldo actual: $" << balance << endl;
}

void depositar(float &balance) {
    float monto;
    cout << "\nMonto a depositar: $";
    cin >> monto;

    if (monto <= 0) {
        cout << "Error: El monto debe ser mayor a 0." << endl;
    } else {
        balance += monto;
        cout << "Deposito realizado con exito. Saldo: $" << balance << endl;
    }
}

void retirar(float *balance) {
    int monto;
    cout << "\nMonto a retirar (multiplos de 5): $";
    cin >> monto;

    if (monto <= 0) {
        cout << "Error: Debe ingresar una cantidad valida mayor a 0." << endl;
    } else if (monto % 5 != 0) {
        cout << "Error: Solo se pueden retirar billetes multiplos de 5." << endl;
    } else if (monto > *balance) {
        cout << "Error: Saldo insuficiente. Tiene $" << *balance << endl;
    } else {
        *balance -= monto;
        cout << "Retiro exitoso. Saldo restante: $" << *balance << endl;
    }
}
