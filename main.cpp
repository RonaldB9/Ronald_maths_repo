#include <iostream>
using namespace std;

void power(int base, int exponent);

int main()
{
    cout<<"GitHub Test"<<endl;
    power(3, 4);
    return 0;
}

void power(int base, int exponent) {
    int finalValue = base;
    for (int i = 1; i < exponent; i++) {
        finalValue = finalValue * base;
    }
    cout << finalValue << endl;
}