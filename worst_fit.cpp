#include<bits/stdc++.h>
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

vector <int> worst_fit(vector <int> memory_blocks, vector <int> process_queue){
int memory_job[memory_blocks.size()],memory_status[memory_blocks.size()];
    for(int k=0; k< memory_blocks.size(); k++){ memory_status[k]=0; memory_job[k]=-100;}
    for(int i=0; i<process_queue.size(); i++)
    {   
        int wstIdx = -1; 
        for(int j=0; j<memory_blocks.size(); j++)
        {
        if((memory_blocks.size[j] >= process_queue.size[i])&& (memory_status[j] == 0))
            { 
                if (wstIdx == -1) 
                    wstIdx = j; 
                else if (memory_blocks.size[wstIdx] < memory_blocks.size[j]) 
                    wstIdx = j; 
            } 
        } 
        if (wstIdx != -1) 
        {      
         memory_block.size[wstIdx] -= process_queue.size[i]; 
        } 
    }
     vector <int> temp(memory_job,memory_job +  memory_blocks.size());
    
    return temp;
}
