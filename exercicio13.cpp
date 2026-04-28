/******************************************************************************

  Faça um programa que solicita a idade de 10 pessoas e exiba a quantidade de pessoas que 
possui idade maior ou igual a 18 anos.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int i = 1, num, contador = 0;
    
    while (i <= 10){
    cout<<"Digite a idade de 10 pessoas: ";
    cin>>num;
    
    if (num >= 18){
        contador ++;
    }
    i++;
}
    cout<<"\nO número de pessoas com mais de 18 é: "<<contador;
    return 0;
}
