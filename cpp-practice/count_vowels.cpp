#include <iostream>
#include <string>
using namespace std;

int main() {

    string input;
    cout << "Enter input: ";
    cin >> input;        // we can also use getLine(cin, input); if we are using space in between words of input.

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;

    for(int i = 0; i < input.length(); i++){

        for(int j = 0; j < 5; j++){

            if(input[i] == vowels[j]){
                count++;
            }
        }
    }
    
    cout << "number of vowels: " << count;
}