#include <iostream>

int main(){

   int age;

   std::cout << "enter your age: ";
   std::cin >> age;

   if(age >= 100){
    std::cout << "you are overage" << '\n';
  }

   else if(age >= 18){
    std::cout << "welcome to the site!" << '\n';
   }

   else if(age < 0){
    std::cout << "not born" << '\n';
   }
  
   else{
    std::cout << "Bye Site " << std::endl;
   }

    return 0;
}