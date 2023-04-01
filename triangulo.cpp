//incluir a biblioteca 
#include <iostream>
using namespace std;
//declarar as variaveis
int main(){
    float base, altura, area;
    
    //interface de usuario pedira a base
    cout << "digite a base do triangulo: ";
    //o programa vai ler o valor
    cin >> base;
    //a interface pedira a altura
    cout << "digite a altura do triangulo: ";
    cin >> altura;
    //o programa vai ler o valor
    
    area = base * altura / 2;
    //dar a expressao para o programa calcular
    
    cout << "a area do triangulo eh: " << area << endl;
    //informar o usuario o valor da area do triangulo
    return 0;
    //fechamento do programa
}