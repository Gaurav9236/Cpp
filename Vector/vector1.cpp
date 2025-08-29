#include <iostream>
#include <vector>
using namespace std;
int main (){

    //Declare a vector of integer
    vector<int> v;

    //1. push_back() Insert elements at  the end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Initial vector:";
    for(int x: v) cout<< x << " ";
    cout << endl;

    //2. size() and capacity()
    cout << "size:" << v.size() << ", capacity: " << v.capacity() << endl;

    //3.at() Access element by index (with bound checking)
    cout << "Element at index 2: " <<  v.at(2) << endl;
}