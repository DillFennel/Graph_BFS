#include "graph.h"

Graph::Graph(int inp_value){
    value = inp_value;
}
Graph::Graph(int inp_value, Graph* inp_parent){
    value = inp_value;
    parents.push_back(inp_parent);
}