#include <cstdlib>
#include <iostream>
 
int main( ) {
    int x, y;
    std::cout << "Digite dois números: ";
    std::cin >> x >> y;
 
 //Se o primeiro valor digitado for maior: mostre na tela a mensagem: " O primeiro valor digitado é maior";
 // Se o primeiro enunciado for falso e se o segundo valor digitado é maior que o primeiro, 
//imprima na tela  "o segundo número é maior". //Senão, mostre na tela a mensagem: "O valores digitados são iguais


 if (x>y)
 {
    std::cout << "O primeiro valor digitado é maior!" <<std:: endl;
 }

   else if (x<y)
   {  
    std::cout << "O segundo valor digitado é o maior!" <<std:: endl;
   }
   
    else
      {
      std::cout << "Os valores são iguais!" <<std:: endl;
      }
 
 return EXIT_SUCCESS;
}