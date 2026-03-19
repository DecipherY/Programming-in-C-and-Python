#include <iostream>
#include <set>
using namespace std;
// set stores unique values and duplicates are removed. Good for checking duplicates fast. 
// This program is also called hashing.
int main() {

    set<int> numbers;

    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);

    for(int num : numbers){
        cout<< num << " ";
    }

}