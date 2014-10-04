#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	auto func = [] () { cout << "Hello world" << endl; };
    func(); // now call the function
    
    auto add = [] (int x,int y) { return x + y;};
    cout << add(3,5) << endl;
    
    //int num = 4;
    int simpArray[4] = {0, 4, 2, 7};
    
    auto printArray = [] (int array[], int count) 
    {
    	for(int i = 0; i < count; i++)
    	{
    		cout << array[i] << endl;
    	}
    };
    
    printArray(simpArray, 4);
    
    auto addOne = [] (int value) { return value + 1;};
    cout << addOne(5) << endl;
    
    auto playLambda = [] (void(*lambda)()) {lambda();};
    playLambda(func);
    playLambda([] () {cout << "Goodbye World!" << endl;});
    
    auto callAndPrintWithOne = [] 
    	(int(*lambda)(int value)){cout << lambda(1) << endl;};
    callAndPrintWithOne(addOne);
    
    /*Returns a new int array
    The new array has elements of the old array
    After having the function getInt applied */
    auto mapInt = [] (int array[], int(*getInt)(int))
    				{	
    					int newArray[4];
    					for(auto& value : newArray)
    						value = getInt(1);
    					return *newArray;
    					};
    auto resultArray[4] = mapInt(simpArray, addOne);
    printArray(resultArray);
    
	return 0;
}
