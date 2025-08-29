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

    //4. front() and back()
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    //5. insert() Insert element at specific position
    v.insert(v.begin() + 2, 25);  //Insert 25 at index 2
    for (int x : v) cout << x << " ";
    cout << endl;
    }