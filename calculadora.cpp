// incluir uma biblioteca pros comandos funcionarem
#include <iostream>
using namespace std;
// declarar as variaveis usadas para a calculadora
int main() {
    // as variaveis
    char op;
    float num1, num2;
    // a interface vai pedir um operador
    cout << "ENTRE COM UM OPERADOR: +, -, /, *: ";
    // o programa vai ler o operador
    cin >> op;
    // a inteface vai pedir dois valores
    cout << "ENTRE COM DOIS VALORES: ";
    // o programa vai ler o segundo valor
    cin >> num1, num2;
    
    // calcular todas as condicoes dentro dos operadores citados
    switch(op) {
        // calcular uma adicao
        case '+':
         cout << num1 << " + " << num2 << " = " << num1 + num2;
         break;
        // calcular uma subtracao 
        case '-':
         cout << num1 << " - " << num2 << " = " << num1 - num2;
         break;
        // calcular uma multiplicacao
        case '*':
         cout << num1 << " * " << num2 << " = " << num1 * num2;
         break;
        // calcular uma divisao
        case '/':
         cout << num1 << " / " << num2 << " = " << num1 / num2;
         break;
        // a interface pedira que o usuario digite um operador correto caso o operador usado nao ser um operador valido para o calculo 
        default:
         cout << "OPERADOR ERRADO, POR FAVOR INSIRA O OPERADOR CORRETO";
        break;
    }
    return 0;
    // fechamento do programa
}    