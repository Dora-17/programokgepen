#include <iostream>
#include <fstream>

using namespace std;

int main()
{    int v[111], a, n, i;
    ifstream myfile("input.txt");
    ofstream out("output.txt");

    myfile>>n;
    for(i=0;i<n;i++){

        myfile>>v[i];
    }

    for(i=0;i<n;i++){
      out<<v[i];
      out<<v[i]/2<<endl;
    }

 myfile.close();
 out.close();

    return 0;
}
