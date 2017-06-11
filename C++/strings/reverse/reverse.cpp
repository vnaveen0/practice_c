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

    void reverse();

    void compactSpace();
    void printString(){cout<<"Printing String: \""<<s<<"\""<<endl;}
};

void 
Strings::compactSpace() {

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

void 
Strings::reverse() {

  int i=0;
  int j = s.size()-1;
  while (i<j) {
    char tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    i++;
    j--;
  }

}



int main() {

  string str = "    ab   c";
  // str = "";
  Strings s(str);
  s.compactSpace();
  s.printString();
  s.reverse();
  s.printString();
  return 0;
}
