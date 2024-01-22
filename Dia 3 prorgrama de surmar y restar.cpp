#include <iostream>
using namespace std;

// Declaración de funciones con parámetros
float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float division(float, float);

int main() {
    // Variables
    float valor1, valor2;

    // Ingresar valores
    cout << "Ingrese el primer número: ";
    cin >> valor1;

    cout << "Ingrese el segundo número: ";
    cin >> valor2;

    // Llamada a funciones
    float resultadoSuma = suma(valor1, valor2);
    float resultadoResta = resta(valor1, valor2);
    float resultadoMultiplicacion = multiplicacion(valor1, valor2);
    float resultadoDivision = division(valor1, valor2);

    // Mostrar resultados
    cout << "Resultado de la suma: " << resultadoSuma << endl;
    cout << "Resultado de la resta: " << resultadoResta << endl;
    cout << "Resultado de la multiplicación: " << resultadoMultiplicacion << endl;

    // Ver si es posible la división
    if (valor2 != 0) {
        cout << "Resultado de la división: " << resultadoDivision << endl;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
    }

    return 0;
}

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    // Asegurarse de que el divisor (b) no sea cero
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
        return 0; // Retorna 0 en caso de error
    }
}

