#include<iostream>
using namespace std;

void print1(int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int size;
    cout<<"Enter the no of lines: ";
    cin>>size;

    print1(size);

}