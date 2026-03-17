#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

string input;

cout << "Please insert string" << endl;
cin >> input;

vector<char> testVector(input.begin(), input.end());

int left = 0;
int right = testVector.size()-1;
bool palindrome = true;

while(left <= right){


    if(testVector[left] != testVector[right]){
        palindrome = false;
        break;
    }
    left++;
    right--;
}

if(palindrome){
    cout << "This string is a palindrome" << endl;
}
else{
    cout << "This string is not a palindrome" << endl;
    cout << "Error happened at the " << left+1 <<" character" << endl;
}

}