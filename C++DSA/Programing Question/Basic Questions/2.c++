// 2. Declare variables of different data types and print their sizes using `sizeof()`.
#include <iostream>
using namespace std;

int main() {
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    char c;
    bool b;
    wchar_t w;
    string str;

    cout << "Size of SHORT:         " << sizeof(s) << " bytes" << endl;
    cout << "Size of INT:           " << sizeof(i) << " bytes" << endl;
    cout << "Size of LONG:          " << sizeof(l) << " bytes" << endl;
    cout << "Size of LONG LONG:     " << sizeof(ll) << " bytes" << endl;
    cout << "Size of FLOAT:         " << sizeof(f) << " bytes" << endl;
    cout << "Size of DOUBLE:        " << sizeof(d) << " bytes" << endl;
    cout << "Size of LONG DOUBLE:   " << sizeof(ld) << " bytes" << endl;
    cout << "Size of CHAR:          " << sizeof(c) << " bytes" << endl;
    cout << "Size of BOOL:          " << sizeof(b) << " bytes" << endl;
    cout << "Size of WCHAR_T:       " << sizeof(w) << " bytes" << endl;
    cout << "Size of STRING:        " << sizeof(str) << " bytes" << endl;

    return 0;
}   
