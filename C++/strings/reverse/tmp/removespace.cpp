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
    void printString(){cout<<"Printing String: "<<s<<endl;}
};

void 
Strings::removeSpace() {
  cout<<"remove space "<<endl;

  istringstream iss(s);
  std::vector<std::string> result;
  string str;
  while ( getline( iss, str, ' ' ) ) {
    if(str[0] != '\0'){
      cout<<"str: *"<<str<<"*"<<endl;
      result.push_back(str);
    }
    else {
    cout<<"space: "<<str<<endl;
    }
  }

  int j=0;
  for(auto &v: result) {
    for(int i=0; v[i] != '\0';i++,j++){
      s[j] = v[i];
    }
    s[j]= ' ';
    j++;
  }
  s[j]='\0';

}


int main() {

  string str = "ab   c";
  Strings s(str);
  s.removeSpace();
  s.printString();
  return 0;
}
