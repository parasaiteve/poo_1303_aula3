//incluir a biblioteca 
#include <iostream>
//inclur a biblioteca cmath para usar mais operadores
#include <cmath>
using namespace std;
//declarar as variaveis
int main() {
    float a, b, c, x1, x2, delta;
    //a interface de usuario pedira o valor de a
    cout << "digite o valor de a: ";
    //lera o valor
    cin >> a;
    //pedira o valor de b
    cout << "digite o valor de b: ";
    //lera o valor
    cin >> b;
    //pedira o valor de c
    cout << "digite o valor de c: ";
    //lera o valor
    cin >> c;
    
    //dar a funcao de delta para calcular a formula de baskhara
    delta = pow(b, 2) - 4 * a * c;
    
    //usar a condicao if para revelar se a equacao tem raiz ou nao
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        // se tiver raizes ira revelar quais sao
        cout << "as raizes da equacao sao: " << x1 << "e" << x2 << endl;
    }
    else {
        // else se nao tiver raizes 
        cout << "a equacao nao tem raizes reais." << endl;
    }
    
    //fechamento do programa
    return 0;
}    