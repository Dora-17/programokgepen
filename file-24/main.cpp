#include <iostream>
#include <fstream>

using namespace std;

int main()
{ int a,b, n, i, v[123];

    ifstream myfile("input.txt");
    ofstream out("out.txt");
    myfile>>n;
    for(i=0;i<n;i++){
        myfile>>v[i];
    }

   for(int balindex=0;balindex<n-1;balindex++){
    for(int jobbindex=balindex;jobbindex<n;jobbindex++){
        if(v[balindex]>v[jobbindex]){
            swap(v[jobbindex], v[balindex]);
            }
        }
    }
for(i=0;i<n;i++){
        if(v[i]%2!=0){
            out<<v[i]<<" "<<endl;
        }
    }

    for(i=0;i<n;i++){
        if(v[i]%2==0){
            out<<v[i]<<" "<<endl;
        }
    }

myfile.close();
out.close();
    return 0;
}
