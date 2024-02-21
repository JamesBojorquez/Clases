#include <iostream>

using namespace std;

// Prototipos de funciones
int sumaParesImpares(int numero, bool sumarPares);
int factorial(int numero);
int contarDigitos(int numero);
void ordenarNumeros(int &num1, int &num2, int &num3);
int sumaDigitos(int numero);

int main() {
    int opcion;
    char continuar;

    do {
        // Menú de opciones
        cout << "Menu:" << endl;
        cout << "1. Suma de numeros pares e impares" << endl;
        cout << "2. Factorial con bucle while" << endl;
        cout << "3. Contador de digitos" << endl;
        cout << "4. Ordenamiento de numeros (ascendente)" << endl;
        cout << "5. Suma de digitos de un numero" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                char opcionSuma;
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Desea sumar pares (P) o impares (I)? ";
                cin >> opcionSuma;
                bool sumarPares = (opcionSuma == 'P' || opcionSuma == 'p');
                int resultado = sumaParesImpares(numero, sumarPares);
                cout << "La suma es: " << resultado << endl;
                break;
            }
            case 2: {
                int numero;
                cout << "Ingrese un numero: ";
                cin >> numero;
                int resultado = factorial(numero);
                cout << "El factorial es: " << resultado << endl;
                break;
            }
            case 3: {
                int numero;
                cout << "Ingrese un numero: ";
                cin >> numero;
                int cantidadDigitos = contarDigitos(numero);
                cout << "El numero tiene " << cantidadDigitos << " digitos." << endl;
                break;
            }
            case 4: {
                int num1, num2, num3;
                cout << "Ingrese tres numeros enteros: ";
                cin >> num1 >> num2 >> num3;
                ordenarNumeros(num1, num2, num3);
                cout << "Numeros ordenados: " << num1 << " " << num2 << " " << num3 << endl;
                break;
            }
            case 5: {
                int numero;
                cout << "Ingrese un numero: ";
                cin >> numero;
                int suma = sumaDigitos(numero);
                cout << "La suma de los digitos es: " << suma << endl;
                break;
            }
            default:
                cout << "Opcion no valida." << endl;
        }

        cout << "¿Desea continuar? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "Fin del programa." << endl;

    return 0;
}

// Función para calcular la suma de números pares o impares hasta un número dado
int sumaParesImpares(int numero, bool sumarPares) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        if (sumarPares) {
            if (i % 2 == 0) {
                suma += i;
            }
        } else {
            if (i % 2 != 0) {
                suma += i;
            }
        }
    }
    return suma;
}

// Función para calcular el factorial de un número dado utilizando un bucle while
int factorial(int numero) {
    int resultado = 1;
    int i = 1;
    while (i <= numero) {
        resultado *= i;
        i++;
    }
    return resultado;
}

// Función para contar la cantidad de dígitos de un número entero utilizando un bucle do-while
int contarDigitos(int numero) {
    int contador = 0;
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);
    return contador;
}

// Función para ordenar tres números enteros de menor a mayor
void ordenarNumeros(int &num1, int &num2, int &num3) {
    if (num1 > num2) {
        swap(num1, num2);
    }
    if (num2 > num3) {
        swap(num2, num3);
    }
    if (num1 > num2) {
        swap(num1, num2);
    }
}

// Función para sumar los dígitos de un número entero
int sumaDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

