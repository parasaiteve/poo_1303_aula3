// incluir uma biblioteca para o programa entender os comandos
#include <iostream>
using namespace std;
// declarar as 3 variaveis
int main() {
    // as variaveis sao floats que podem mudar de valor por isso nao sao constantes
    float base, altura, area;
    
    // a interface de usuario que pedira ao usuario o valor da base
    cout << "digite a base do triangulo: ";
    // o programa ira ler o valor dado pelo usuario
    cin >> base;
    // a interface pedira a altura do triangulo ao o usuario
    cout << "digite a altura do triangulo: ";
    // o programa ira ler o valor dado 
    cin >> altura;
    
    //dar a funcao para poder calcular a area do triangulo
    area = (base * altura) / 2;
    
    // o resultado voltara ao usuario
    cout << "a area do triangulo eh: " << area << endl;
    
    return 0;
}
