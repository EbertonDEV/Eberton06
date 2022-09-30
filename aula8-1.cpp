//1. Escreva um programa em C++ que tenha uma função que recebe um inteiro n e retorna a
// soma de todos os inteiros menores que n.
#include <iostream>
#include <cstdlib>
using namespace std;

int func(int n, int soma, int a) 
{    
    soma=0;
    a=n;
    for (int i = 0; i < n; --n)
     { 
        if(n!=a)
        {
        soma =soma+n;    
        cout << "menor inteiro: " << n << endl;
        }             
     }
     cout << "resultado da soma dos inteiros menor que " <<   a  <<  " é: "  << soma<< endl;
    return 0;

}    
int main ()
{
int n, a,soma;
cout << "Digite um numero inteiro: "<< endl;
cin>> n;
func(n,soma,a);
return 0;
}