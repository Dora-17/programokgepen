#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int i=0, tomb[100], a;
    fstream in ("input.txt");
    while(in>>tomb[i]){
        i++;
    }
    for(a=0; a<i; a+=2){
        if (tomb[a]%2!=0){
            cout<<tomb[a]<<endl;
        }
    }
    in.close();
    return 0;
}
