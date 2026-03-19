#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int count = 0;

    for(int i = 0; i<n; i++){
        int num;
        cin>>num;

        if(num % 2 == 0){
            count++;
        }
    }
    cout<<"even numbers: "<<count;
}