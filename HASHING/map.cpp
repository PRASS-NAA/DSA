#include<iostream>
#include<map>

using namespace std;

int main()
{
    
    map<int,int>mpp;

    int arr[5] = {1,2,2,3,3};

    for(int i=0;i<5;i++)
    {
        mpp[arr[i]]++;
    }

    for(int i=1;i<5;i++)
    {
        cout<<mpp[i]<<"\t";
    }

    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}