#include <iostream>  // cout

#include "tasks.hpp"

using namespace std;

int main() {
    vector<int> a = {1,2,4,5};
    vector<int> b = {2,6,7,2,9,1};
    vector<int> res = find_common_elements(a,b);
    for(int x:res) cout<<x<<" ";
}