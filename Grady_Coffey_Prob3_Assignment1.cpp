#include <iostream>
#include <cmath> 
int num;

int main() {
  std::cout << "Please enter integer number" << std::endl;
  std::cin>> num;
  int qt= num/4;
  int rr= num%4;
  if(num >= 0 && num <= 100 ){
      if(num%4 ==0){
          
          std::cout << "The given number ("<< num << ") is divisible by 4" << std:: endl;
          
      }
      else if(num%4 !=0){
          std::cout << "The given number ("<< num << ") is not divisible by 4" << std:: endl;
      }
      std::cout << "Quotient: "<< qt << " and Remainder: ";
          std::cout<< rr << std::endl;
  }
  else if(num>100){
      std::cout << "Entered number is greater then 100 and its square root is " << sqrt(num);
  }
  else {
      std::cout << "The program doesn't accept negative numbers" << std::endl;
      
  }


  return 0;
}
