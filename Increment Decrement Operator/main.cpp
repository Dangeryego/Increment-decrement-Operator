#include <iostream>

using namespace std;

int main()
{
    cout << "Example 1 (Simple Increment)" << endl;
    int a{10};
    cout << "a: " << a << endl;
    a++;
    cout << "Counter: " << a << endl;
    ++a;
    cout << "Counter: " << a << endl;
    cout << "*--------------------------------------------------------------------------*" << endl;

    cout << "\nExample 2 (Pre-increment)" << endl;
    int b{10};
    int c {0};
    cout << "Counter: " << b << endl;
    c = ++b; // First increment then value is stored in c
    cout << "Counter after incremnt: " << b << endl;
    cout << "Total: " << c << endl;
    cout << "*--------------------------------------------------------------------------*" << endl;

    cout << "\nExample 3 (Post-increment)" << endl;
    int d {10};
    int e {0};
    cout << "Counter: " << d << endl;
    e = d++; // First e = d, then d++
    cout << "Counter after increment: " << d << endl;
    cout << "Result: " << e << endl;
    cout << "*--------------------------------------------------------------------------*" << endl;

    cout << "\nExample 4 (Pre-increment operating along with another operator)" << endl;
    int f {10};
    int g {0};
    cout << "Counter: " << f << endl;
    g = ++f + 10; // First ++f, then 11+10
    cout << "Counter after imcrement: " << f << endl;
    cout << "Result: " << g << endl;
    cout << "*--------------------------------------------------------------------------*" << endl;

    cout << "\nExample 4 (Post-increment operating along with another operator)" << endl;
    int h {10};
    int i {0};
    cout << "Counter: " << h << endl;
    i = h++ + 10; // i = h + 10, then h++
    cout << "Counter after increment: " << h << endl;
    cout << "Result: " << i << endl;

    return 0;
}
