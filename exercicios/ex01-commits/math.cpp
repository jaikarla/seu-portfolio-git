#include <iostream>

// Programa simples de calculadora que realiza operações básicas com dois números inteiros

int main() {
    int num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "\nSoma: " << (num1 + num2) << std::endl;
    std::cout << "Subtração: " << (num1 - num2) << std::endl;
    std::cout << "Multiplicação: " << (num1 * num2) << std::endl;
    std::cout << "Divisão: " << (num1 / num2) << std::endl;

    return 0;
}