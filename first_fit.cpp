#include<bits/stdc++.h>
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

vector <int> first_fit(vector <int> memory_blocks, vector <int> process_queue){
    int memory_job[memory_blocks.size()];
    memory_job[memory_blocks.size()] = {0};
    cout<<memory_job[0]<<endl;
    int memory_status[memory_blocks.size()];
    memory_status[memory_blocks.size()] = {0}; // initalization and defining in same line error
    for(int i=0; i<= process_queue.size(); i++)
    {
        for(int j=0; j<=memory_blocks.size(); j++)
        {
            if((process_queue[i] < memory_blocks[j]) &&(memory_status[j] == 0))
            {
                memory_job[j] = i;
                cout<<j;
                memory_status[j] = 1;      
            }
        }
    }
    cout<<memory_job[1]<<endl;
    cout<<memory_status[1]<<endl;
    vector <int> temp(memory_job,memory_job +  memory_blocks.size());
    return temp;
}