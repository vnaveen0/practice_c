#include <iostream>
using namespace std;


class Comodo {

  int vada;
  int *pav;

  public:
  void print() {
  cout<<"vada: "<<vada<<"  pav: "<<*pav<<endl;
  }

  Comodo(int V, int P) {
  vada = V;
  pav = new int;
  *pav = P;
  print();
  }
};


int main()
{
  Comodo C(2,3);
  return 0;




}
