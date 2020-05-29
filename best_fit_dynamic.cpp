#include<bits/stdc++.h>
#include<vector>
#include<stdio.h>
#include<iostream>
using namespace std;

vector <int> d_best_fit(vector <int> memory_blocks, vector <int> process_queue){
    int memory_job[memory_blocks.size()];
   
    for(int k=0; k< memory_blocks.size(); k++)
    { 
        memory_job[k]=-100;
    }
   
    for(int i=0; i<process_queue.size(); i++)
    {   
        int minimum = -222;
        for(int j=0; j<memory_blocks.size(); j++)
        {
            if((process_queue[i] <= memory_blocks[j]))
            {
                if(minimum==-222)
                {
                    minimum = j;
                }
                else if(memory_blocks[j]<memory_blocks[minimum])
                {
                    minimum = j;
                }
            }
        }
        if (minimum!=-222)
        {
            memory_job[i] = minimum;
             //similar to static here we reduce the memory space 
             // once a process is assigned to it.
            memory_blocks[minimum] -= process_queue[i];
        }
    }

    vector <int> temp(memory_job,memory_job +  memory_blocks.size());
    
    return temp;
}