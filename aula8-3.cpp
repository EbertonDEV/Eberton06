/*3. Escreva um programa em C++ que tenha dois vetores preenchidos com valores do tipo double (pelo menos 5 
valores em cada vetor),vetor a e b, e retorne o produto elemento por elemento de a e b. Ou seja, ele produz
 (imprime) um vetor c de mesmo comprimento tal que c[i] = a[i] * b[i].Utilize uma função para receber os 
 vetores e realizar a multiplicação e outra função para receber e imprimir o vetor de resultado.*/
#include <cstdlib>
#include <iostream>
using namespace std;

void func(double vetora[], double vetorb[], double vetorc[])
{
 for (size_t i = 0; i < 5; i++)
     {
     vetorc[i]= vetora[i]*vetorb[i];
     }        
}
        void imprime (double vetorc[])
        {
            for (size_t i = 0; i < 5; i++)
            {
            cout <<" Na posição: " << i << "  O valor da multiplicação é: "<< vetorc[i]<< endl;
            }  
        } 

int main( )
{
  double vetora[]= {1.1, 2.2, 3.3, 4.4, 5.5};
  double vetorb[]= {5.1, 4.1, 3.1, 2.1, 1.1};
  double vetorc[5];
  func (vetora, vetorb, vetorc);
  imprime (vetorc);
  return 0;
}