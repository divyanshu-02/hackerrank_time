#include <bits/stdc++.h>

using namespace std;

struct arraylist
{
    int n;
    int a[100];
};
void rotate(int arr[], int a){
        int temp = arr[a];
        arr[a] = arr[a+1];
        arr[a+1] = arr[a+2];
        arr[a+2] = temp;
    }
 bool bubleSort(int array[], int n){
        for (int i=0; i<n-2; i++){
            for (int j=n-2-1; j>=i; j--){
                while (array[j]>array[j+1]||array[j]>array[j+2]) {
                    rotate(array,j);
                }
            }
        }
        if(array[n-2]<array[n-1])
            return true;
        return false;    
    }
    

int main()
{
    int t;
    cin>>t;
    int i,j;
    arraylist s[t];
    for(i=0;i<t;i++)
    {
        cin>>s[i].n;
        for(j=0;j<s[i].n;j++)
        {
            cin>>s[i].a[j];
        }
    }
    for(i=0;i<t;i++)
    {
        if(bubleSort(s[i].a,s[i].n)==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
