#include <iostream>
#include <stdarg.h>
#include <list>

class Graph{
    private:
        int value;
        std::list <Graph*> parents;
    public:
        void add_parent(Graph* inp_parent){
            parents.push_back(inp_parent);
        }
        Graph* get_parent(int n){
            std::list<Graph*>::iterator ret = parents.begin();
            for(int i=0; i<n; i++){
                ret++;
            }
            return *ret;
        }
        Graph(int inp_value){
            value = inp_value;
        }
        Graph(int inp_value, Graph* inp_parent){
            value = inp_value;
            add_parent(inp_parent);
        }
        int get_value(){
            return value;
        }
        std::pair<int, int> get_longest_path(){
            int ret = 0;
            int longest_parent = 0;
            for(auto i: parents){
                std::pair<int, int> parent_data = get_longest_path()
                if()
            }
        }

};
int main(){
    Graph a (1);
    Graph b (2, &a);


    return 1;
}
