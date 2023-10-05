#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<pair<int,int>>v;
    // v.push_back({1,3});
    // v.emplace_back(1,2);

    // vector<int>v(5,100);          // create 5 size and every element is 100.
    // vector<int>v(5);              // create 5 size with garbage values.

    // Access the elements in vectors.

    vector<int>v;
    v.emplace_back(10);    // Add element 
    v.emplace_back(20);
    v.emplace_back(12);
    v.emplace_back(23);
    v.emplace_back(35);

    for(auto it:v)         // Printing vector
    {
        cout<<it<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+2 , v.begin()+4);       // Delete

    for(auto it:v)
    {
        cout<<it<<" ";
    }

     

}