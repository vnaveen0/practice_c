#include <iostream>
using namespace std;
#include <vector>
#include <sstream>
#include <string>



class Strings {
  private:
    string s;
    void reverse_string(string& str, int startidx, int endidx); 

  public : 
    Strings(string _s)
    {
      s = _s;
    };

    void reverse();
    void subreverse();

    void compactSpace();
    void printString(){cout<<"Printing String: \""<<s<<"\""<<endl;}
};

void 
Strings::compactSpace() {

  int i = 1; 
  int j=1;
  
  if(s.empty())
    return;


  while(j < s.size()) {
  
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
Strings::reverse_string(string& str, int startidx, int endidx) { 

  int i=startidx;
  int j = endidx;
  while (i<j) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    i++;
    j--;
  }

}

void 
Strings::reverse(){
  reverse_string(this->s,0,s.size()-1);
}

void
Strings::subreverse() {
  int word_start=0;
  int word_end=0;
  int i =0;
  bool iswordSet = false;
  bool isReverse=false;

  while(i < s.size() ) {

    if( s[i] == ' '){
      if(!isReverse && iswordSet){
        reverse_string(s,word_start,word_end);
        isReverse = true;
      }
      iswordSet = false;
    }

    else {
      if(!iswordSet) {

        word_start = i;
        word_end = i;
        iswordSet = true;
        isReverse = false;
      }
      else {
        word_end = i;
      }

    }

    i++;

  }

  if(!isReverse && iswordSet) {
    reverse_string(s,word_start,word_end);
  }


}

int main() {

  string str = "    ab   c";
  // str = "";
  str="This  sky is dark            blue";
  Strings s(str);

  cout<<"Compacting"<<endl;
  s.compactSpace();
  s.printString();

  cout<<"Reversing "<<endl;
  s.reverse();
  s.printString();

  cout<<"sub Reversing "<<endl;
  s.subreverse();
  s.printString();
  return 0;
}
