#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int array[3] = {3, 4, 2};
    
    vector<int> vec;
    vec.push_back(15);
    vec.push_back(8);
    
    for(auto i : array)
    {
        cout << i << endl;
    }
    
    for(auto j : vec)
    
    {
    	cout << j << endl;
    }
   
   return 0;
}
