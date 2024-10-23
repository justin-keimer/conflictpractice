#include <iostream>
using namespace std;

int add(int a, int b);
void switchNums(int a, int b);

int main() {

    cout <<"My name is Tom\n";
    cout <<"hello world\n";
    cout << add(5, 7)<<endl;
    switchNums(5, 7);
    return 0;
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