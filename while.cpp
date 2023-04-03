// incluir uma bibilioteca 
#include <iostream>
using namespace std;

//declarcao das variaveis
int main() {
    int num, i = 1;
    
    //interface de usuario
    cout << "digite um numero inteiro positivo: ";
    cin >> num;
    
    // usar while para enquanto o numero for maior de i
    while (i <= num) {
        // mostrar a contagem de 1 ate i
        cout << i << " ";
        i++;
    }
    // fechamento do programa
    return 0;

}