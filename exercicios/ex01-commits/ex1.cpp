// exercicio 1
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double n1 = 4.0;
    double n2 = 12.25;
    double n3 = 0.0121;
    double x;

    // calcula a raiz quadrada dos numeros abaixo
    cout << "Raiz quadrada de " << n1 << " = " << sqrt(n1) << "\n";
    cout << "Raiz quadrada de " << n2 << " = " << sqrt(n2) << "\n";
    cout << "Raiz quadrada de " << n3 << " = " << sqrt(n3) << "\n";
    
    // lendo um numero
    cout << "\nDigite um numero: ";
    cin >> x;

    // imprime a raiz quadrada 
    cout << "Raiz quadrada de " << x << " = " << sqrt(x);

    return 0;
}
