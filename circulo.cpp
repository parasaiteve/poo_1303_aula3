#include <iostream>
using namespace std;
// a declaracao da variavel
int main() {
    // a variavel declarada sera em float por ser um numero quebrado
    float raio, area;
    // PI é uma constante em float
    const float PI = 3.14159;
    // interface do usuario que vai pedir um numero que sera o raio 
    cout << "digite o raio do circulo: ";
    // o programa ira ler o numero dado pelo usuario
    cin >> raio;
    // a função para o programa poder calcular a area do circulo
    area = PI * raio * raio;
    // apos dado o raio a area do circulo sera calculada e o resultado volta ao usuario 
    cout << "a area do circulo eh: " << area << endl;
    
    return 0;
}


