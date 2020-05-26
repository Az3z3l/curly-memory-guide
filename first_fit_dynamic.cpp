#include<bits/stdc++.h>
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

vector <int> d_first_fit(vector <int> memory_blocks, vector <int> process_queue){
    int memory_job[memory_blocks.size()],memory_status[memory_blocks.size()];
    for(int k=0; k< memory_blocks.size(); k++){memory_job[k]=-100;}
    for(int i=0; i<process_queue.size(); i++)
    {   
        for(int j=0; j<memory_blocks.size(); j++)
        {

            if((process_queue[i] <= memory_blocks[j]))
            {
                memory_job[i] = j;
                memory_blocks[j] -= process_queue[i];
                break;      
            }

        }
    }
    vector <int> temp(memory_job,memory_job +  memory_blocks.size());
    return temp;
}