#include <iostream>

using namespace std;

int main()
{
    int n, F,prev1=0,prev2=1,i;
    cout << "n=";
    cin >> n;
    for(i=2;i<n;i++){
        F=prev1+prev2
        prev1=prev2
        prev2=F
    }
    cout << "F" << F;
    return 0;
}
