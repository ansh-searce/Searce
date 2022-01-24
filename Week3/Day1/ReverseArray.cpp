#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int lo=0,hi=n-1;
    int temp;

    while(lo<hi)
    {
        temp=A[lo];
        A[lo]=A[hi];
        A[hi]=temp;
        lo++;
        hi--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<endl;

}

