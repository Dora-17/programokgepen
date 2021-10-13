#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int i, a, n;
    // file megnyitasa
    ofstream myfile("output.txt");
    cout << "n=";
    cin >> n;
    for(i=0; i<n; i++){
      cout << "a=";
      cin >> a;
      myfile << a << endl;

    }
    myfile.close();

    return 0;
}
