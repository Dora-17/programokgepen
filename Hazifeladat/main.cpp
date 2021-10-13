#include <iostream>

using namespace std;

int main()
{
    int i,a,b,oszto,eredeti_szam,tukorszam;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    bool prim,palindrom;
    for(i=a;i<=b;i++)
    {
        palindrom=true;
        prim=true;
        for(oszto=2;oszto<i/2+1;oszto++)
            if(i%oszto==0)
                prim=false;
        if(prim==true)
        {
           for(tukorszam=0,eredeti_szam=i;eredeti_szam>0;)
                {tukorszam=tukorszam*10 + eredeti_szam%10;
                eredeti_szam/=10;}

            if(i!=tukorszam)
                palindrom=false;
            if(palindrom==true)
                cout <<i<<endl;
        }

    }
    return 0;
}
