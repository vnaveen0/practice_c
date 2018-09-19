#include <iostream>
#include <list>
using namespace std;

class Graph {
                    int num_vertices;
  list<int> *adj;

 public:
  void print();
  Graph(int V);
  ~Graph();
  void add_edge(int v, int w);
};

void Graph::add_edge(int v, int w) { adj[v].push_back(w); }

Graph::Graph(int _vertices) {
  num_vertices = _vertices;
  adj = new list<int>[_vertices];
}

Graph::~Graph() { delete[] adj; }

void Graph::print() {
  for (size_t v = 0; v != num_vertices; ++v) {
    for (auto w : adj[v]) {
      cout << v << "->" << w << endl;
    }
  }
}

int main() {
  Graph G(4);
  G.add_edge(1, 2);
  G.add_edge(2, 0);
  G.add_edge(2, 3);
  G.add_edge(3, 3);
  G.add_edge(0, 1);
  G.add_edge(0, 2);

  G.print();

  return 0;
}
