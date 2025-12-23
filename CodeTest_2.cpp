#include <iostream>
// Some practice using a while loop
// Jordan Young

int main(){
std::cout <<"\t\tExercise 1.9 \n";
int num1 = 50;
int num2 = 0;
int sum = 0;

    while (num1 <= 100){
    sum += num1;
    num1++;
}
std::cout <<"The sum: " <<sum;

    std::cout <<"\n-----------------------------------------" << std::endl;

std::cout <<"\t\tExercise 1.10 \n";

int value = 10;
int minNum =10;

std::cout<<"Numbers from 10 to 0: ";
while(value >= 0){

minNum += value;
std::cout<<value << ", ";
value--;
}
   std::cout <<"\n-----------------------------------------" << std::endl;

   std::cout <<"\t\tExercise 1.11 \n";

   int Num1, Num2;
    std::cout <<"Please ender two integers: ";
    std::cin >> Num1;
    std::cin >> Num2;

  std::cout <<"The range from "<< Num1 << " to " << Num2 << " is: \n";

  while(Num1 < Num2){
int i = 1;
  Num1 += i;
    std::cout << Num1;
    i++;

    if(Num1 < Num2){

        std::cout <<", ";
    }
  }



     std::cout <<"\n-----------------------------------------" << std::endl;
    return 0;
}