/******************************************************************************

Faça um programa que solicita ao usuário dois valores inteiros e positivos que serão a base 
e o expoente. O programa deve usar laço de repetição para calcular e escrever o resultado 
da base elevado ao expoente (potência). 

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a, b, resultado = 1, i = 0;
    cout<<"Digite a base e o expoente: ";
    cin>>a>>b;
    
    while (i<b){
        resultado *= a;
        i++;
    }
    cout<<"Resultado: "<<resultado;
    
    return 0;
}
