/******************************************************************************

Faça um programa para uma calculadora simples que solicita ao usuário dois operandos 
como entrada, seleciona uma das opções da lista (1- soma, 2- produto, 3- divisão, 4-
potência) e exibe o resultado. O algoritmo deve executar repetidamente até que os dois 
operandos informados sejam iguais a zero. Utilize uma variável do tipo real para exibir o 
resultado.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, resultado;
    int opcao;
    
    while (true){
        cout<<"Digite dois números: ";
        cin>>a>>b;
        
        if (a == 0 && b == 0){
        cout<<"\nOperação finalizada!";
        break;
        }
        
        cout<<"\n1- Soma"<<endl;
        cout<<"2-Produto"<<endl;
        cout<<"3-Divisão"<<endl;
        cout<<"4-Potência"<<endl;
        cout<<"\nSelecione uma opção da lista: ";
        cin>>opcao;
        
        if (opcao == 1){
            resultado = a + b;
        }
        else if (opcao == 2){
            resultado = a * b;
        }
        else if (opcao == 3){
            
            if (b != 0){
            resultado = a / b;    
            }
            else {
            cout<<"Divisão inválida.";
            }
            
            
        }
        else if (opcao == 4){
            resultado = pow(a,b);
        }
        cout<<"O resultado da operação é: "<<resultado<<endl<<endl;
    }
    return 0;
}
