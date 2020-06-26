#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    int i=0,j,n,k,m;
    j=3;
    k=3;
    if(t==1)
    {
        cout<<"3";
    }
    else if(t==2)
    {
        cout<<"2";
    }
    else if(t==3)
    {
        cout<<"1";
    }
    else
    {
        for(i=1; ;i++)
        {
            j=j*2;
            k=k+j;
            if(k>=t)    
                break;
        }
        k=k-j;
        n=3*pow(2,i);
        for(m=k+1; ;m++)
        {
            if(m==t)
                break;
            else
                n--;
        }
        cout<<n;

    }    
    return 0;

}
