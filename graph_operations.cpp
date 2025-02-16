#include "graph_operations.h"


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
        for(auto parent : curr_verc->parents){
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
    verces_data[max_verc].first++;
    verces_data[max_verc].second.push_back(max_verc);
    return verces_data[max_verc];
}