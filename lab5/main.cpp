#include <iostream>

using namespace std;

int main()
{
    int a,b,c
    cout <<"a=";
    cin >>a;
    cout <<"b=";
    cin >> b;
    cout <<"c=";
    cin >> c;
    if (a>=b && a >=c) {
        cout << "Az a erteke a legnagyobb: " << a;
    } else if (b>=c){
        cout << "A b erteke a legnagyobb: " << b;
    } else {
        cout << "A c erteke a legnagyobb: " << c;
    }
    return 0;
}
