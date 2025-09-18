#include <iostream>
#include <string>
#include <vector>

using namespace std;
// function declarations
void modify(string& s);
void modify(int& num);
void printString(const string& s);
void printVector(const vector<string>& v);

int main() {
    string s = "Hello, World!";
    cout << s << endl;
    modify(s);
    printString(s);
    int num{30};
    modify(num);
    cout << "num=" << num << endl;

    vector<string> v1{"one", "two", "three"};
    printVector(v1);
    int &ref=num; // rarely used, gives you an alias to the variable (error prone)
    cout << "ref=" << ref << endl;
    return 0;
}
void modify(int &num) {
    num += 10;
}
void modify(string &str) {
    str[0] = 'h';
}
// const parameter means you cannot change the parameter in the function
// you can pass in any modifiable string, but the function can't modify it
void printString(const string& s) {
    cout << s << endl;
    // s[0] = 'l'; compiler error
}
void printVector(const vector<string>& v) {
    for (string s : v) {
        cout << s << " ";
    }
    cout << endl;
}   