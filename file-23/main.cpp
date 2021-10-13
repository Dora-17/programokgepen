#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
int t[100], i = 0;
    while (in >> t[i]){
        i++;
    }
    int n = i;
    double S = 0;
    int szamlalo = 0;
    for (i=0; i<n; i++){
        if (i < a || i > b) {
            S+=t[i];
            szamlalo++;
        }
    }
    cout << S/szamlalo;

    return 0;
}
