// incluir uma biblioteca pros comandos funcionarem
#include <iostream>
using namespace std;
//inicio do comando
int main() {
    // declarar as variaveis com numeros variaveis
    float base, altura, area;
    
    //interface do usuario para digitar a base 
    cout << "digite a base do trianguloretangulo: ";
    //ler a informacao dada pelo usuario
    cin >> base;
    //pedir ao usuario a altura do trianguloretangulo
    cout << "digite a altura do trianguloretangulo: ";
    //ler a informcacao
    cin >> altura;
    
    //dar a funcao para o calculo
    area = (base * altura) / 2;
    
    //resultado volta para o usuario
    cout << "a area do trinaguloretangulo eh: " << area << endl;
    
    return 0;
}