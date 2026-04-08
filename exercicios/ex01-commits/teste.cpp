#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 25, 3, 42, 15};
    
    int soma = 0;
    for (int num : numeros) {
        soma += num;
    }
    
    std::cout << "Soma dos numeros: " << soma << std::endl;
    std::cout << "Media: " << (soma / numeros.size()) << std::endl;
    
    return 0;
}