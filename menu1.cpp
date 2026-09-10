#include <iostream>
using namespace std;

do {
    cout<< "Bienvenidos a nuestro cajero automatico";
    cout<< "1. Mostrar Balance"<< endl;
    cout<< "2. Depositar "<< endl;
    cout<< "3. Retirar"<< endl;
    cout<< "4.  Salir" << endl;
    cout<< "Seleccione una opcion: ";
    cin>> opcion;

    switch (opcion){
         case 1:
            cout << "\nSu balance actual es: $" << balanceInicial << endl;
            break;
        case 2:
            depositar(balanceInicial); 
            break;
        case 3:
            retirar(&balanceInicial);  
            break;
        case 4:
            cout << "\nGracias por utilizar nuestros servicios. ¡Hasta pronto!" << endl;
            break;
        default:
            cout << "\nOpcion no valida. Intente de nuevo." << endl;
    }

} while (opcion != 4);



