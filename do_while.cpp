// incluir uma bibilioteca 
#include <iostream>
using namespace std;

//declarcao das variaveis
int main() {
    int num;
    
    // usar do para executar o codigo
    do {
        cout << "digite um numero de 1 a 10: ";
        cin >> num;
        //while para ser usada em condicao
    }while (num < 1 || num > 10);
    
    cout << "voce digitou digitou o numero " << num << ".";
    
    // fechamento do programa
    return 0;

}