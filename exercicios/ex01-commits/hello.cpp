#include <iostream>
#include <string>

int main() {
    std::string nome;
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);
    std::cout << "Hello, " << nome << "!" << std::endl;
    return 0;
}
