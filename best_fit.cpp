#include<bits/stdc++.h>
#include<vector>
#include<stdio.h>
#include<iostream>
using namespace std;

vector <int> best_fit(vector <int> memory_blocks, vector <int> process_queue){
    int memory_job[memory_blocks.size()],memory_status[memory_blocks.size()];
   
    for(int k=0; k< memory_blocks.size(); k++)
    { 
        memory_status[k]=0; memory_job[k]=-100;
    }
   
    for(int i=0; i<process_queue.size(); i++)
    {   
        int minimum = -222;
        for(int j=0; j<memory_blocks.size(); j++)
        {
            //Check if the memory space is bigger than the process.
            if((process_queue[i] <= memory_blocks[j]) && (memory_status[j] == 0))
            {
                //if not assigned, assign as minimum
                if(minimum==-222)
                {
                    minimum = j;
                }
                // if the current memory space is greater than process size 
                // and smaller already allocated memory 
                // assgin the current memory space as minimum
                else if(memory_blocks[j]<memory_blocks[minimum])
                {
                    minimum = j;
                }
            }
        }
        if (minimum!=-222)
        {
            memory_job[i] = minimum;
            memory_status[minimum] = 1;
        }
    }

    vector <int> temp(memory_job,memory_job +  memory_blocks.size());
    
    return temp;
}