#include <iostream>
using namespace std;
#include <vector>
#include <sstream>
#include <string>



class Strings {
  private:
    string s;
  public : 
    Strings(string _s)
    {
      s = _s;
    };

    void removeSpace();
    void printString(){cout<<"Printing String: \""<<s<<"\""<<endl;}
};

void 
Strings::removeSpace() {

  int i = 1; 
  int j=1;
  
  if(s.empty())
    return;


  while(s[j] != '\0') {
  
    if(s[j]== ' ' && s[j-1] == ' ') {
      j++;
    }
    else {
      s[i] = s[j];
      i++;
      j++;
    }
  }

  // s[i] = '\0';
  s.resize(i);

}


int main() {

  string str = "    ab   c";
  // str = "";
  Strings s(str);
  s.removeSpace();
  s.printString();
  return 0;
}
