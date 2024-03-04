#include <iostream>
using namespace std;

int main(){
    //declaração e impressão de variáveis em C++
  
    int vidas = 10; // 10, 25, 30, etc.
    char letra = 'A'; // a, b, c, d, etc.
    double decimal = 0.125412 ; // 0.125412 
    float decimal2 = 0.1; // é como se fosse o dpuble mas tem menor precisão
    bool logica = false; // true or false
    string palavra_ou_texto = "Meu pai é foda, eu sou fodinha"; // recebe palavra ou texto

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << logica << "\n";
    cout << palavra_ou_texto << "\n";
    
    cout << "Digite o número de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Digite um número decimal muito grande: ";
    cin >> decimal;
    cout << "Digite um número decimal bastante pequeno: ";
    cin >> decimal2;
    cout << "Digite seu nome: ";
    cin >> palavra_ou_texto;

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << logica << "\n";
    cout << palavra_ou_texto << "\n";

    // cout << vidas << "\n";<< letra << "\n";<< decimal << "\n";<< decimal2 << "\n";<< logica << "\n";<< palavra_ou_texto << "\n";
    // também funciona dessa forma ^^

    return 0;
}
