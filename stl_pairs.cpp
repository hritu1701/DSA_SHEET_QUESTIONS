#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int,int>arr[]={{1,2},{2,3},{4,5}};
    cout<<arr[0].first;


    pair<int,pair<int,int>>p={1,{2,3}};
    cout<<p.second.first;
}