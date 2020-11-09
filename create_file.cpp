#include <iostream>
#include <fstream>
using namespace std;
//codingwithec
int main () {
//to write on file...
  ofstream file;
  file.open ("coding.txt");
  //this text goes in to the file.
  file << "This file saves the results of c++ codes.\n";
  file<<"Add something to this file...\n";
  //we can ask users to enter something in th file
  int a;
  cout<<"Please enter any number: ";
  cin>>a;
  file<<a;
  file.close();
  return 0;
}
