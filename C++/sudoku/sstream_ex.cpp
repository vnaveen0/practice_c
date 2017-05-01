#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;



int main()
{
 
  stringstream ss;

  string s1 = "Hi";
  string s2 = "Hello";

  string o;

  ss<<s2;
  ss>>o;
  cout<<"ss: "<<ss.str()<<endl;
  cout<<"o: " <<o<<endl;
  ss.clear();
  ss.str("");

  ss<<s1;
  ss>>o;
  cout<<"ss: "<<ss.str()<<endl;
  cout<<"o: " <<o<<endl;

  //-----------------------------
  

  // string o;
  // stringstream ss;
  // ss<<1234<<"text"<<'c';
  // ss>>o;
  // cout<<"ss: " <<ss.str()<<endl;
  // cout<<"o: " <<o<<endl;
  //
  // ss.clear();
  // ss.str("");
  //
  // int a = 1;
  // string textvalues = "textc";
  //
  //
  // // cin>>a;
  // // cin>>textvalues;
  //
  // // ss.clear();
  // // ss.str("");
  //
  // ss<<a<<textvalues;
  // // cout<<ss.str();
  // ss>>o;
  // cout<<"ss: " <<ss.str()<<endl;
  // cout<<"o: " <<o<<endl;


  return 0;
}
