#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl; //Asking user to input the number of elements in the array
    cin>>n;
    int A[n];
    cout<<"Enter array elements"<<endl; //Asking user to enter the array elements
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int lo=0,hi=n-1; //lo is to represent the index of first element in the array and hi is to represet the last index of the array
    int temp;

    while(lo<hi) //Iterataing through the array as long as value of lo is less than hi
    {
        temp=A[lo]; //Storing the element associated with the lo index in a temporary variable so we dont lose the value
        A[lo]=A[hi]; //Swapping the value of first element with the last element and so on
        A[hi]=temp; 
        lo++; //Incrementing value of lo to move to next element in forward direction
        hi--; // Decremeting value of hi to move to next element in backward direction
    }

    for(int i=0;i<n;i++) //Displaying the reversed array
    {
        cout<<A[i]<<" ";
    }

    cout<<endl;

}

