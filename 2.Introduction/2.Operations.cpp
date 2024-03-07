#include <iostream>

int n1,n2;

int main(){

    int n3,n4,resultado_soma, resultado_multiplicacao, resultado_divisao, resultado_subtracao, resultado_mod;

    std::cout << "Digite o primeiro valor que deseja somar!" << std::endl;
    std:: cin >> n1;
    std::cout << "Digite o segundo valor que deseja somar!" << std::endl;
    std:: cin >> n2;
    std::cout << "Digite o terceiro valor que deseja somar!" << std::endl;
    std:: cin >> n3;
    std::cout << "Digite o quarto valor que deseja somar!" << std::endl;
    std:: cin >> n4;

    resultado_soma = n1 + n2 + n3 + n4;
    resultado_multiplicacao = n1 * n2 * n3 * n4;
    resultado_divisao = resultado_multiplicacao / resultado_soma;
    resultado_subtracao = resultado_multiplicacao - resultado_soma;
    resultado_mod = resultado_multiplicacao % resultado_soma;


    std::cout << "O resultado da sua soma foi: " << resultado_soma << std::endl << std::endl;
    std::cout << "O resultado da sua subtração foi: " << resultado_subtracao << std::endl << std::endl;
    std::cout << "O resultado da sua multiplicação foi: " << resultado_multiplicacao << std::endl << std::endl;
    std::cout << "O resultado da sua divisão foi: " << resultado_divisao << std::endl << std::endl;
    std::cout << "O resultado da sua divisão foi: " << resultado_mod << std::endl << std::endl;

    
    return 0;
    }
