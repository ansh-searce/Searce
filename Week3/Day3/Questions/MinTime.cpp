#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int> &x, const pair<int, int> &y) //Custom sorting function
{
    return x.first + x.second < y.first + y.second;
}

int main()
{
    int N; //Number of customers
    cin>>N;
    vector<pair<int, int> > customer; // To store time of ordering and time required to cook
    int a,b;
    for(int i=0;i<N;i++)
    {
        cin>>a>>b;
        customer.push_back(make_pair(a, b));
    }

    sort(customer.begin(),customer.end(),compare);
    vector<int> waiting;
    int total=0;
    for(int i=0;i<customer.size();i++)
    {
        if(waiting.empty()==1)
        {
            waiting.push_back(customer[i].second);
            total += waiting.back();
        }

        else
        {
             if(customer[i].first < customer[i - 1].first + customer[i - 1].second) //  arrival time of customer is less than ending time of previous customer
                {
                    total += customer[i].second + waiting.back() - customer[i].first + customer[i - 1].first;
                    waiting.push_back(customer[i].second + waiting.back() - customer[i].first + customer[i - 1].first);
                }
             else // if customer arrives after the previous customer's order has completed then there is no waiting time
                {
                    total += customer[i].second;
                    waiting.push_back(customer[i].second);
                }
        }
    }

    cout<<total/N;
}