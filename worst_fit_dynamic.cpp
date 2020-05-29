#include<bits/stdc++.h>
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

vector <int> d_worst_fit(vector <int> memory_blocks, vector <int> process_queue){
int memory_job[memory_blocks.size()];
    for(int k=0; k< memory_blocks.size(); k++)
    { 
        memory_job[k]=-100;
    }

    for(int i=0; i<process_queue.size(); i++)
    {   
        int maximum = -222; 
        for(int j=0; j<memory_blocks.size(); j++)
        {
            if((memory_blocks[j] >= process_queue[i]))
            { 
                if (maximum == -222) 
                {
                    maximum = j; 
                    
                }
                else if (memory_blocks[maximum] < memory_blocks[j]) 
                {    
                    maximum = j; 
                }    
            } 
        } 
        if (maximum != -222) 
        {   
            memory_job[i] = maximum;
             //similar to static here we reduce the memory space 
             // once a process is assigned to it.
            memory_blocks[maximum] -= process_queue[i]; 
        } 
    }
     vector <int> temp(memory_job,memory_job +  memory_blocks.size());
    
    return temp;
}
