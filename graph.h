#pragma once
#include <list>

class Graph{
    public:
        int value;
        std::list <Graph*> parents;
        Graph(int inp_value);
        Graph(int inp_value, Graph* inp_parent);

};