#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    vector <int> memory_block;
    int flag=0,mm_size=0;
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

    return 0;
}