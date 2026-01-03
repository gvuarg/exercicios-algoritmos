#include <iostream>

int main() {
    // 1. Criamos as "caixinhas" (variáveis) para guardar as notas
    float nota1 = 9.0;
    float nota2 = 7.0;
    
    // 2. Criamos a caixinha da média e fazemos a conta
    float media = (nota1 + nota2) / 2;
    
    // 3. Mostramos o resultado final na tela
    std::cout << "A media final do aluno eh: " << media << std::endl;
    
    return 0;
}
