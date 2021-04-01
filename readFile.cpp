
// read File
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ifstream myfile;
  string readLine; 
  myfile.open ("example.txt");
  while(getline(myfile, readLine)){
      cout<<readLine<<endl;
  }
  myfile.close();
  return 0;
}