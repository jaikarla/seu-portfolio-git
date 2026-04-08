#include <iostream>
#include <string> // Inclui a biblioteca para manipulação de strings

int main() {
    std::string nome;
    std::cout << "Digite seu nome: "; // Solicita ao usuário que digite seu nome
    std::getline(std::cin, nome);
    std::cout << "Hello, " << nome << "!" << std::endl; // Exibe uma mensagem de saudação personalizada usando o nome fornecido pelo usuário
    return 0;
}
