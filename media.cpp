//incluir as bibliotecas para lerem os comandos
#include <iostream>
#include <stdlib.h>
using namespace std;
// declarar as variaveis em double
int main() {
    
    double nota1, nota2, nota3, nota4;
    //interface vai pedir a nota para o usuario
    cout << "digite a sua primeira nota do semestre: ";
    // o programa vai ler o valor
    cin >> nota1;
    //interface vai pedir a nota para o usuario
    cout << "digite a sua segunda nota do semestre: ";
    // o programa vai ler o valor
    cin >> nota2;
    //interface vai pedir a nota para o usuario
    cout << "digite a sua terceira nota do semestre: ";
    // o programa vai ler o valor
    cin >> nota3;
    //interface vai pedir a nota para o usuario
    cout << "digite a sua quarta nota do semestre: ";
    // o programa vai ler o valor
    cin >> nota4;
    // dar a funcao para o programa calcular a media
    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma / 4);
    cout << "a sua media no semestre foi: " << soma << endl;
    //usar if para o usuario saber se foi aprovado ou nao
    if(soma >= 7){
        cout << "parabens! voce foi aprovado!" << endl;
    }else{
        cout << "eita! voce foi reprovado!" << endl;
    }
    //fechamento do programa
    return 0;
    
}
