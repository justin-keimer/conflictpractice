#include <iostream>
using namespace std;
void say(string word);

int main() {

    cout <<"hello world\n";
    say("Hello function");
    return 0;
}

void say(string word) {
    cout << word;
}