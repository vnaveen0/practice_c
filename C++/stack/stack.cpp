#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class stack 
{
 
  private:
    vector<T> _storage;

  public:
    stack() {}
    ~stack(){}
    bool empty() const {return _storage.empty();}
    void push(T const item) {return  _storage.push_back(item);}
    void pop() 
    {
      if(_storage.empty())
        throw out_of_range("pop: stack is empty \n");
      else 
        _storage.pop_back();
    }

    const T    top() const 
    {
      if(_storage.empty())
        throw out_of_range("Top: stack is empty \n");
      return _storage.back(); }

};



int main()
{
  stack<int> Stack;
   Stack.push(23);
   Stack.push(12);
   cout<<"Stack top element is : "<<Stack.top()<<endl;
   Stack.pop();
   cout<<"Stack top element is : "<<Stack.top()<<endl;
   Stack.pop();
   // cout<<"Stack top element is : "<<Stack.top()<<endl;



   return 0;
}




