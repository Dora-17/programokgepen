#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    if (a > b) {

        cout << "az a valtozo erteke a nagyobb";
    } else if (b > a) {
        cout << "a b valtozo erteke a nagyobb";
    } else {
        cout << "a ket valtozo erteke egyenlo";
    }

    return 0;
}
