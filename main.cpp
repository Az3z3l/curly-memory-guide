#include <iostream>
#include <stdio.h>
#include <vector>
#include "first_fit.cpp"
#include "best_fit.cpp"
#include "worst_fit.cpp"
#include "worst_fit_dynamic.cpp"
#include "best_fit_dynamic.cpp"

using namespace std;


void print(vector <int> order){
    for(int o=0; o<order.size(); o++)
    {   if(order[o]== -100)
        {
            cout<<"Process"<<o<<" has the no in process "<<endl;
        }
        else{
        cout<<"Processs "<<o<<" is in the mem block "<<order[o]<<endl;
        }
    }
}


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

    // cout<<endl<<"First Fit Algorithm"<<endl;
    // vector<int> first = first_fit(memory_block,process_list);
    // print(first);

    // cout<<endl<<"Best Fit Algorithm"<<endl;
    // vector<int> best = best_fit(memory_block,process_list);
    // print(best);
  
    // cout<<endl<<"Worst Fit Algorithm"<<endl;
    // vector<int> worst = worst_fit(memory_block,process_list);
    // print(worst);

    // cout<<endl<<"Dynamic Worst Fit Algorithm"<<endl;
    // vector<int> dworst = d_worst_fit(memory_block,process_list);
    // print(dworst);

    cout<<endl<<"Dynamic Best Fit Algorithm"<<endl;
    vector<int> dbest = d_best_fit(memory_block,process_list);
    print(dbest);

    return 0;
}
