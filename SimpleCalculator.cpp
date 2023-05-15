#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  char choice;
  float inputone;
  float inputtwo;
  float result;
  char rerun;
  cout <<"Hello, Welcome to my simple Calculator!\n"<< endl;
  cout <<"Please choose your operation!:\nA.Adding\nB.Subtracting\nC.Multiplication\nD.Division" << endl;
  cin >> choice;
  cout << "Please enter your first number!" << endl;
  cin >> inputone;
  cout << "Please enter your second number!" << endl;
  cin >> inputtwo;
    
  if(choice == 'A' || choice =='a')
  {
    result=(inputone + inputtwo);
  }
  else if(choice == 'B'|| choice == 'b')
  {
    result=(inputone - inputtwo);
  }
  else if(choice == 'C'|| choice == 'c')
  {
    result=(inputone * inputtwo);
  }
  else if(choice == 'D'|| choice == 'd')
  {
    result=(inputone / inputtwo);
   }
   else {
     cout << "Invalid input!" << endl;
   }

 cout << "Here is the answer :\t" << result << endl;
 return 0;
 }




