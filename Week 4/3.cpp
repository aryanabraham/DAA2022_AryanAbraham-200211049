//Given an unsorted array of integers, design an algorithm and implement it using a program to
//find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n))

#include <iostream>
using namespace std;

int main()
{
    int lrg, sml;
    int a[5] = {2,4,3,9,3};
    
    lrg = a[0];
    sml = a[1];
    
    if(sml > lrg)
    {
        lrg = a[1];
        sml = a[0] ;
    }
    
    for(int i = 2; i< 5; i++)
    {
        if(a[i] > lrg)
          lrg = a[i];
        
        if(a[i] < sml)
          sml = a[i];
       
    }

    cout<<"Largest: "<<large;
    cout<<"\nSmallest: "<<sml;
    return 0;
}
