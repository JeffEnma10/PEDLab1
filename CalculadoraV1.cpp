#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;
    
do {
        // Mostrar el menú
        cout << "\n--- CALCULADORA ---\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicacion\n";
        cout << "4. Division\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Pedir numeros si la opcion es correcta
        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
               resultado = num1 + num2;
               cout << "Resultado de la suma: " << resultado << endl;
               break;
            case 2:
                 resultado = num1 - num2;
                 cout << "Resultado de la resta: " << resultado << endl;
                 break;
             case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida, intente de nuevo" << endl;
        }
        
    } while (opcion != 5);
 



return 0;
}
