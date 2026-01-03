#include <iostream>

int main() {
    float nota1 = 8.5;
    float nota2 = 4.5;
    float media = (nota1 + nota2) / 2;

    std::cout << "Media final: " << media << std::endl;

    if (media >= 6.0) {
        std::cout << "Status: APROVADO! Parabens." << std::endl;
    } else {
        std::cout << "Status: REPROVADO... Precisa estudar mais para a DP!" << std::endl;
    }

    return 0;
}
