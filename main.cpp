#include <iostream>
#include "graph.h"
#include "graph_operations.h"

int main(){
    Graph a (1);
    Graph b (2, &a);
    Graph c (3, &b);
    Graph d (4);
    c.parents.push_back(&d);

    std::pair<int, std::list<Graph*>> ret = get_longest_path(&c);
    std::cout<<std::endl;
    std::cout<<ret.first<<std::endl<<std::endl;
    for(auto i: ret.second){
        std::cout<<i->value<<std::endl;
    }
    return 1;
}