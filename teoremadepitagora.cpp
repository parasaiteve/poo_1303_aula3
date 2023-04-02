// incluir uma biblioteca pros comandos funcionarem
#include <iostream>
#include <cmath>
using namespace std;
//inicio do comando
int main() {
    // declarar as variaveis com numeros variaveis
    float cateto_adj, cateto_op, hipotenusa;
    //interface pedira o valor do cateto adj
    cout << "digite o valor do cateto adj: ";
    //o programa ira ler o valor
    cin >> cateto_adj;
    //interface pedira o valor do cateto op
    cout << "digite o valor do cateto op: ";
    //o programa vai receber a informacao
    cin >> cateto_op;
    
    //a funcao do teorema de pitagoras
    hipotenusa = sqrt(pow(cateto_adj, 2) + pow(cateto_op, 2); 
    
    cout << "o comprimento da hipotebusa eh: " << hipotenusa << endl;
    
    return 0;
}
