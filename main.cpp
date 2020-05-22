#include <iostream>
#include <stdio.h>
#include <vector>
#include "first_fit.cpp"
using namespace std;
int main()
{
    vector <int> memory_block,process_list;
    int flag=0,mm_size=0,p_size=0;
    cout<<"Enter the number of blocks : ";
    cin>>mm_size;
    while(mm_size > 0)
    {   
        int inp;
        cout<<"Enter the memory_block "<<flag++<<" size : ";
        cin>>inp;
        memory_block.push_back(inp);
        mm_size--;
    }
    cout<<"Enter the number of process : ";
    cin>>p_size;
    flag=0;
    while(p_size > 0)
    {   
        int inp;
        cout<<"Enter the process size of  P"<<flag++<<" size : ";
        cin>>inp;
        process_list.push_back(inp);
        p_size--;
    }

    vector<int> minewine = first_fit(memory_block,process_list);
    for(int o=0; o<minewine.size(); o++)
    {
        cout<<minewine[o]<<endl;
    }
    return 0;
}