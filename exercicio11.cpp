/******************************************************************************

Faça um algoritmo que solicite um valor inteiro e informe, ao final, o fatorial deste valor. 
Obs.: por exemplo, o fatorial de 5 é 120, pois 5 x 4 x 3 x 2 x 1 = 120.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double contador = 1, num, resultado = 1;
    cout<<"Digite um valor inteiro: ";
    cin>>num;
    
    while (num >= contador){
        resultado *= contador;
        contador++;
    }
    cout<<"Resultado = "<<resultado;
    
    return 0;
}
