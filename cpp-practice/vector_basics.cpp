#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; //vector is dynamic array in which we do not have to declare size of array.

    int n; //input n is an interger.
    cout<< "How many numbers: "; //asks from user to input the number.
    cin>>n; //takes n as an input.

    //We run for loop to declare a integer variable x which stores the numbers and push them into an array.

    for(int i = 0; i < n; i++){  
        int x;
        cin>>x;
        numbers.push_back(x);

    }

    cout << "Numbers are: "; //output the numbers.

    //this loop prints all the numbers in vector

    for(int i = 0; i < numbers.size(); i++){ // number.size() returns how many elements are there in the vector.
        cout<< numbers[i] << " "; // numbers[i] is used here to access the elements by their indexes.

    }
}
