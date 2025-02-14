#include <iostream>
#include <stdarg.h>
#include <list>

class Graph{
    private:
        int value;
        std::list <Graph*> parents;
    public:
        add_parents(Graph* parent, ...){
            va_list val;
            va_start(val, parents);
            for(auto i : parents){
                parents.push_back(va_arg(val, Graph*));
            }
            va_end(val);
        }
};
int main(){
    std::cout<<1<<std::endl;
    return 1;
}
