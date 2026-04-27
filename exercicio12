/******************************************************************************

Faça um algoritmo que faça a geração da série de fibonacci, até o termo n informado pelo 
usuário. Por exemplo, se o usuário informar o valor 6 deverá ser exibido 8 na tela. 
Obs.: Série de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, ... 

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n, n1 = 1, n2 = 1;
    int proximo = 1, contador = 2;
    
    cout<<"Digite o termo n: ";
    cin>>n;
    if (n == 1 || n == 2){
        cout<<"O valor é 1.";
    }
    else{
    while (contador < n){
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
        contador++;
    }
    cout<<"O resultado é: "<<n2;
    }
    return 0;
}
