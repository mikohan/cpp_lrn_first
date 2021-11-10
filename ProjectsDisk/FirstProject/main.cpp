#include <iostream>
using namespace std;


int age {20};

int main() {
    int age {50}; 
    cout << age << endl;

    cout << "size of information" << endl;
    cout << "int" << sizeof(int) << endl;
    cout << "unsigned int" << sizeof(unsigned int) << endl;
    cout << "short" << sizeof(short) << endl;
    cout << "long" << sizeof(long) << endl;
    cout << "long long" << sizeof(long long) << endl;


    return 0;
}
