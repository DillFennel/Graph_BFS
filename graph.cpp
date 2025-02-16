#include "graph.h"

Graph::Graph(int inp_value){
    value = inp_value;
}
Graph::Graph(int inp_value, Graph* inp_parent){
    value = inp_value;
    parents.push_back(inp_parent);
}
/*
std::pair<int, std::list<Graph*>> get_longest_path(Graph* end){
    std::map <Graph*, std::pair<int, std::list<Graph*>>> verces_data;
    int max_path = 0;
    Graph* max_verc = end;
    std::queue <Graph*> verces_queue;
    verces_queue.push(end);
    std::pair<int, std::list<Graph*>> new_data;
    while(not(verces_queue.empty())){
        Graph* curr_verc = verces_queue.front();
        verces_queue.pop();
        std::cout<<curr_verc->value<<std::endl;
        for(auto parent : curr_verc->parents){
            std::cout<<"p: "<<parent->value<<std::endl;
            new_data = verces_data[curr_verc];
            new_data.first ++;
            new_data.second.push_back(curr_verc);
            verces_data[parent] = new_data;
            if(new_data.first > max_path){
                max_path = new_data.first;
                max_verc = parent;
            }
            verces_queue.push(parent);
        }
    }
    std::cout<<std::endl;
    for (const auto& p : verces_data) {
        std::cout<<p.first->value<<": "<<p.second.first<<" : ";
        for(auto i: p.second.second){
            std::cout<<i->value<<", ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<max_verc->value<<" "<<max_path<<std::endl;
    verces_data[max_verc].first++;
    verces_data[max_verc].second.push_back(max_verc);
    return verces_data[max_verc];
}
    
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
    */
