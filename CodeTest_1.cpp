#include <iostream>
// Some practice using a while loop
// Jordan Young

int main(){
std::cout <<"\t\tExercise 1.9 \n";
int num2 = 0;
int sum = 0;

    for (int num1 = 50; num1 <= 100; num1++){sum += num1;}
std::cout <<"The sum: " <<sum;

    std::cout <<"\n-----------------------------------------" << std::endl;

std::cout <<"\t\tExercise 1.10 \n";

int minNum =10;

std::cout<<"Numbers from 10 to 0: ";
for(int value = 10; value >= 0; value--){
minNum += value;
std::cout<<value;

    if(value > 0){std::cout<<", ";}
}
   std::cout <<"\n-----------------------------------------" << std::endl;

   std::cout <<"\t\tExercise 1.11 \n";

   int Num1, Num2;
    std::cout <<"Please ender two integers: ";
    std::cin >> Num1;
    std::cin >> Num2;

  std::cout <<"The range from "<< Num1 << " to " << Num2 << " is: \n";
if (Num1 < Num2){
  for(;Num1 <= Num2; Num1++){
    std::cout << Num1;

    if(Num1 < Num2){

        std::cout <<", ";
    }
  }
}
else if(Num2 < Num1){
   for(; Num2 <= Num1; Num1++){
    std::cout << Num2;
    if(Num2 < Num1){

        std::cout <<", ";
    }
  }
}

else if(Num1 == Num2){
    std::cout <<"The two integers are equal to each other";
}


     std::cout <<"\n-----------------------------------------" << std::endl;
    return 0;
}