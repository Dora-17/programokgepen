#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int tomb[100],n,t;
    bool prim=true;
    ifstream in("input.txt");
    ofstream out("output.txt");

    while(in>>n)
    {
        prim=true;
        for(int i=2; i<n/2; i++)
        {
            if(n%2 == 0) prim=false;
        }

        if(prim) out<<1<<endl;
        else out<<0<<endl;
    }

    in.close();
    out.close();

    return 0;
}
