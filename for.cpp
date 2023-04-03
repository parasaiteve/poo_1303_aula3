// incluir uma bibilioteca 
#include <iostream>
using namespace std;

//declarcao das variaveis
int main() {
    int num;
    
    //interface de usuario
    cout << "digite um numero inteiro positivo: ";
    cin >> num;
    
    //mostrar os primeiros numeros pares usando o numero solicitado pelo usuario
    cout << "os primeiros " << num << " numeros pares sao: ";
    
    // usar for para executar os numeros ate onde o usuario solicita
    for (int i = 2; i <= num * 2; i += 2) {
        cout << i << " ";
    }
    
    
    // fechamento do programa
    return 0;

}