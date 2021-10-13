#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int t[100] , i=0;
    ifstream in ("input.txt");
    ofstream out ("output.txt");
    while (in >> t[i]){
        i++;
    }
    int n=i;
    for(i=0 ; i<n ; i+=2){
        int a,b;
        a=t[i];
        b=t[i+1];
        while(a!=b){
if(a>b){
                a-=b;
            }
            else {
                b-=a;
            }
        }
        out << a << endl ;

    }

   in.close();
   out.close();
    return 0;
}
