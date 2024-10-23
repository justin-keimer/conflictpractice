#include <iostream>
using namespace std;
void say(string word);

int add(int a, int b);
void switchNums(int a, int b);

int main() {

    cout <<"My name is Tom\n";
    cout <<"hello world\n";
    say("Hello function");
    cout << endl;
    cout << add(5, 7)<<endl;
    switchNums(5, 7);
    return 0;
}

void say(string word) {
    cout << word;
}

int add(int a , int b) {
    return a + b;
}

void switchNums(int a, int b) {
    cout << a << " is the first  number " << b << " is the second number\n";
    int temp1 = a;
    a = b;
    b = temp1;
    cout << "Now they are switched " << a << " " << b <<endl;

}