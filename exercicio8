/******************************************************************************

Faça um programa que solicita ao usuário uma quantidade indeterminada de números 
inteiros. O programa deve calcular e escrever a média aritmética apenas dos números 
pares. A entrada de dados deve ser encerrada quando o número 0 (ZERO) for digitado. 

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num, soma = 0, contador = 0;
    float media;
    
    cout<<"Digite um ou mais números inteiros (0 para parar): ";
    cin>>num;
    
    while (num != 0){
        if (num % 2 == 0){
            soma += num;
            contador ++;
        }
        cin >> num;
    }
    
    if (contador > 0){
        media =  soma / contador;
        cout<<"Resultado = "<<media;
    }
    else{
        cout<<"Não foram digitados números pares!";
    }
    return 0;
}
