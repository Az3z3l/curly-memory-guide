#include <iostream>
#include <stdio.h>
#include <vector>
#include "first_fit.cpp"
#include "best_fit.cpp"
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

    cout<<endl<<"First Fit Algorithm"<<endl;
    vector<int> minewine = first_fit(memory_block,process_list);
    for(int o=0; o<minewine.size(); o++)
    {   if(minewine[o]== -100)
        {
            cout<<"Memory"<<o<<" has the no in process "<<endl;
        }
        else{
        cout<<"Memory"<<o<<" has the process "<<minewine[o]<<endl;
        }
    }

    cout<<endl<<"Best Fit Algorithm"<<endl;
    vector<int> order = best_fit(memory_block,process_list);
    for(int o=0; o<order.size(); o++)
    {   if(order[o]== -100)
        {
            cout<<"Memory"<<o<<" has the no in process "<<endl;
        }
        else{
        cout<<"Memory"<<o<<" has the process "<<order[o]<<endl;
        }
    }
    cout<<endl<<"Worst Fit Algorithm"<<endl;
    vector<int> order = worst_fit(memory_block,process_list);
    for(int o=0; o<order.size(); o++)
    {   if(order[o]== -100)
        {
            cout<<"Memory"<<o<<" has the no in process "<<endl;
        }
        else{
        cout<<"Memory"<<o<<" has the process "<<order[o]<<endl;
        }
    }

    return 0;
}
