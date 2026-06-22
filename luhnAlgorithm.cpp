// luhn Algorithm
#include<iostream>
#include<string>
int getDigit(const int number);
int sumOddDigit(const std::string CardNumber);
int sumEvenDigit(const std::string CardNumber);
using namespace std;
int main(){
  
  std::string cardNumber;
  int results = 0;

  cout << "Enter the credit card number: ";
  cin >> cardNumber;
  results = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);
 
if(results % 10 == 0){
    cout<< cardNumber << " The credit card number is valid." << endl;
}
else{
    cout << cardNumber << " The credit card number is invalid." << endl;
}
return 0;
}
int getDigit(const int number){

    return number % 10 + (number / 10%10);
}

int sumOddDigit(const std::string CardNumber){
    int sum = 0;
    
    for(int i = CardNumber.size() - 1; i >= 0; i -= 2){
        sum += CardNumber[i] - '0';
    }
    return sum;
    }

int sumEvenDigit(const std::string CardNumber){
  int sum = 0;

  for(int i = CardNumber.size() - 2; i >= 0; i -= 2){
    int digit = (CardNumber[i] - '0') * 2;
    sum += getDigit(digit);
  }
  return sum;
}