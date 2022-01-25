#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    stack<pair<int,int>> x, max;
    int n, i = 0;
    cin>>n;
    while(i < n)
    {
        int t, v;
        pair<int, int> p1, p2;
        cin>>t;
        if(t == 1)
        {
            cin>>v;
            x.push(make_pair(v, i));
            if(max.size() == 0)
            {
                max.push(make_pair(v, i));
            }
            else
            {
                p1 = max.top();
                if(p1.first < v)
                {
                    max.push(make_pair(v, i));
                }
            }
        }
        else if(t == 2)
        {
            p1 = x.top();
            x.pop();
            p2 = max.top();
            if(p1.first == p2.first && p1.second == p2.second)
            {
                max.pop();
            }
        }
        else
        {
            p1 = max.top();
            int temp=p1.first;
            arr.push_back(temp);
        }
        i++;
    }
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}