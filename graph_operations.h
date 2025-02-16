#pragma once
#include "graph.h"
#include <queue>
#include <list>
#include <map>

std::pair<int, std::list<Graph*>> get_longest_path(Graph* end);