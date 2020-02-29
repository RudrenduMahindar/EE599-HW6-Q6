#include <iostream>
#include "src/lib/solution.h"

int main()
{
    vector<int> v={9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int i=9;
    Solution s;
    s.arrange_vector(v,i);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    cout<<"[ ";
    for(auto it=v.begin();it!=v.end();it++)
        cout<< *it << " ";
    cout<<"]"<<endl;    
    return EXIT_SUCCESS;
}