#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers;

    int n;
    cout<< "Enter number: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        numbers.push_back(x);
    }

    int start = 0;
    int end = numbers.size() - 1;

    while(start < end) {
        swap(numbers[start], numbers[end]);
        start++;
        end--;
    }

    for(int i = 0; i < numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }
}