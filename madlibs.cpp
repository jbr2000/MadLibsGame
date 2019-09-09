//Authors: 
#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::string;
using std::cin;

string noun1;
string name1;
string profession1;
int number1;
int main()
{
cout << "Enter a noun:" << endl;
cin >> noun1;
cout << "Enter a first name:" << endl;
cin >> name1;
cout << "Enter a profession:" << endl;
cin >> profession1;
cout << "Enter a whole number:" << endl;
cin >> number1;
cout << "Here is your adlib:" << endl;
cout << "There once was a " << noun1 << " named " << name1 << "."  << endl << "He was a great " << profession1 << " with " << number1 << " fans." << endl << "What a cool lad." << endl;
  return 0;
}
