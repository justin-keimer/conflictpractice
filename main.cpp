#include <iostream>
using namespace std;
void say(string word);

int add(int a, int b);

int main() {

    cout <<"My name is Tom\n";
    cout <<"hello world\n";
    say("Hello function");
    cout << endl;
    cout << add(5, 7)<<endl;
    return 0;
}

void say(string word) {
    cout << word;
}

int add(int a , int b) {
    return a + b;
}