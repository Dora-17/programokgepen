#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream myfile("input.txt");
    ofstream myfili("output.txt");
    int n,i,x,S=0;
    myfile >> n;
    for(i=1;i<n;i++){
        myfile >>x;
        int S=0;
        for(int oszto=1;oszto<x;oszto++){
            if(x%oszto==0){
                S+=oszto;
            }
        }
        if(S==x){
            myfili << 1 << endl;
        }else{
            myfili << 0 << endl;
        }
    }
    myfile.close();
    myfili.close();

    return 0;
}
