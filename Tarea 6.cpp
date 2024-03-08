#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anoPublicacion;

public:
    Libro(string _titulo, string _autor, int _anoPublicacion) {
        titulo = _titulo;
        autor = _autor;
        anoPublicacion = _anoPublicacion;
    }

    void setTitulo(string _titulo) {
        titulo = _titulo;
    }

    void setAutor(string _autor) {
        autor = _autor;
    }

    void setAnoPublicacion(int _anoPublicacion) {
        anoPublicacion = _anoPublicacion;
    }

    string getTitulo() {
        return titulo;
    }

    string getAutor() {
        return autor;
    }

    int getAnoPublicacion() {
        return anoPublicacion;
    }

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de Publicacion: " << anoPublicacion << endl;
    }
};

class Estudiante {
private:
    string nombre;
    string apellido;
    int edad;
    string curso;

public:
    Estudiante(string _nombre, string _apellido, int _edad, string _curso) {
        nombre = _nombre;
        apellido = _apellido;
        edad = _edad;
        curso = _curso;
    }

    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    void setApellido(string _apellido) {
        apellido = _apellido;
    }

    void setEdad(int _edad) {
        edad = _edad;
    }

    void setCurso(string _curso) {
        curso = _curso;
    }

    string getNombre() {
        return nombre;
    }

    string getApellido() {
        return apellido;
    }

    int getEdad() {
        return edad;
    }

    string getCurso() {
        return curso;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

class Calculadora {A
private:
    double num1;
    double num2;

public:
    Calculadora(double _num1, double _num2) {
        num1 = _num1;
        num2 = _num2;
    }

    void setNum1(double _num1) {
        num1 = _num1;
    }

    void setNum2(double _num2) {
        num2 = _num2;
    }

    double getNum1() {
        return num1;
    }

    double getNum2() {
        return num2;
    }

    double sumar() {
        return num1 + num2;
    }

    double restar() {
        return num1 - num2;
    }

    double multiplicar() {
        return num1 * num2;
    }

    double dividir() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: No se puede dividir por cero." << endl;
            return 0;
        }
    }
};

class CuentaBancaria {
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    CuentaBancaria(string _nombreTitular, string _numeroCuenta, double _saldo) {
        nombreTitular = _nombreTitular;
        numeroCuenta = _numeroCuenta;
        saldo = _saldo;
    }

    void depositar(double cantidad) {
        saldo += cantidad;
    }

    void retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
        } else {
            cout << "Error: Saldo insuficiente." << endl;
        }
    }

    double consultarSaldo() {
        return saldo;
    }

    string getNombreTitular() {
        return nombreTitular;
    }

    string getNumeroCuenta() {
        return numeroCuenta;
    }
};

class Pelicula {
private:
    string titulo;
    string director;
    int anoLanzamiento;

public:
    Pelicula(string _titulo, string _director, int _anoLanzamiento) {
        titulo = _titulo;
        director = _director;
        anoLanzamiento = _anoLanzamiento;
    }

    void setTitulo(string _titulo) {
        titulo = _titulo;
    }

    void setDirector(string _director) {
        director = _director;
    }

    void setAnoLanzamiento(int _anoLanzamiento) {
        anoLanzamiento = _anoLanzamiento;
    }

    string getTitulo() {
        return titulo;
    }

    string getDirector() {
        return director;
    }

    int getAnoLanzamiento() {
        return anoLanzamiento;
    }

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Anio de Lanzamiento: " << anoLanzamiento << endl;
    }
};

int main() {
    string titulo, autor, curso, nombreTitular, numeroCuenta, director;
    int anoPublicacion, edad, anoLanzamiento;
    double saldo, num1, num2;

    cout << "Ingrese el titulo del libro: ";
    getline(cin, titulo);

    cout << "Ingrese el autor del libro: ";
    getline(cin, autor);

    cout << "Ingrese el anio de publicación del libro: ";
    cin >> anoPublicacion;
    cin.ignore();

    Libro libro(titulo, autor, anoPublicacion);

    cout << "\nInformación del Libro:" << endl;
    libro.mostrarInformacion();

    cout << "\nIngrese el nombre del estudiante: ";
    getline(cin, titulo);

    cout << "Ingrese el apellido del estudiante: ";
    getline(cin, autor);

    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;
    cin.ignore(); 

    cout << "Ingrese el curso del estudiante: ";
    getline(cin, curso);

    Estudiante estudiante(titulo, autor, edad, curso);

    cout << "\nInformación del Estudiante:" << endl;
    estudiante.mostrarInformacion();

    cout << "\nIngrese dos números para realizar operaciones matematicas:" << endl;
    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;

    Calculadora calculadora(num1, num2);

    cout << "La suma de los numeros es: " << calculadora.sumar() << endl;
    cout << "La resta de los numeros es: " << calculadora.restar() << endl;
    cout << "El producto de los numeros es: " << calculadora.multiplicar() << endl;
    cout << "El cociente de los numeros es: " << calculadora.dividir() << endl;

    cout << "\nIngrese el nombre del titular de la cuenta bancaria: ";
    getline(cin, nombreTitular);

    cout << "Ingrese el numero de cuenta bancaria: ";
    getline(cin, numeroCuenta);

    cout << "Ingrese el saldo inicial de la cuenta bancaria: ";
    cin >> saldo;

    CuentaBancaria cuentaBancaria(nombreTitular, numeroCuenta, saldo);

    double deposito, retiro;

    cout << "\nIngrese la cantidad a depositar: ";
    cin >> deposito;
    cuentaBancaria.depositar(deposito);

    cout << "Ingrese la cantidad a retirar: ";
    cin >> retiro;
    cuentaBancaria.retirar(retiro);

    cout << "El saldo actual de la cuenta es: " << cuentaBancaria.consultarSaldo() << endl;

    cout << "\nIngrese el título de la pelicula: ";
    getline(cin, titulo);

    cout << "Ingrese el director de la pelicula: ";
    getline(cin, director);

    cout << "Ingrese el anio de lanzamiento de la pelicula: ";
    cin >> anoLanzamiento;

    Pelicula pelicula(titulo, director, anoLanzamiento);

    cout << "\nInformación de la Pelicula:" << endl;
    pelicula.mostrarInformacion();

    return 0;
}

