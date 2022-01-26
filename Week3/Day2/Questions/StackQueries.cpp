#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<pair<int,int>> x, max; //The x stack stores all the elements that we push into the stack, The Max stack is for storing the maximum elements
    int n, i = 0;
    cin>>n; //n is the number of operations that a user wants to perform 
    while(i < n) 
    {
        int t, v; //t is for taking the input of the user regarding which operation they want to perform.
        pair<int, int> p1, p2;
        cin>>t;
        if(t == 1) // 1 is the input for pushing an element into the stack
        {
            cin>>v; //v represents the data that the user wants to push into the stack
            x.push(make_pair(v, i)); //We push the element into the x stack which stores all the elements
            if(max.size() == 0) //If the max element stack is empty then we directly push the element into the max stack
            {
                max.push(make_pair(v, i));
            }
            else //Else we will compare it with the current element on top of the max stack. If current top element is smaller then we push the new element into the max stack.
            {
                p1 = max.top();
                if(p1.first < v)
                {
                    max.push(make_pair(v, i));
                }
            }
        }
        else if(t == 2) //This input is for removing an element from the stack.
        {
            p1 = x.top(); //We store the top element of the x stack (which is going to be removed) to compare with the top element of the max stack.
            x.pop();
            p2 = max.top();
            if(p1.first == p2.first && p1.second == p2.second) //If the elements of x stack and max stack match then this element has to be popped from the max stack also
            {
                max.pop();
            }
        }
        else //This is the final case which is used when t=3, It is to display the max element present in the stack.
        {
            p1 = max.top(); //We take the top of the max stack which represents the maximum element
            cout<<"Maximum Element: "<<p1.first<<endl;
        }
        i++;
    }
    return 0;
}