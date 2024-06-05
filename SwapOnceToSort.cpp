//A given array is sorted except two positions are swapped. Swap them back to sort the array.
//Time complexity should be O(n).
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int idx1=-1,idx2=-1;//Need to find to positions to swap!!
    vector<int> arr={1,2,3,4,5,6,8,7,9};

    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]>arr[i+1]){ 
            if(idx1==-1){//As this is the first misplaced index, ith position is idx1
             idx1=i;
             idx2=i+1;//If consecutive swapping is done!
            } 
            else{ //As now, the smaller element is encountered, (i+1)th position should be swapped.
               idx2=i+1;
               break;
            }
        } 

    }
    swap(arr[idx1],arr[idx2]);

    for(int i=0;i<arr.size();i++)
      cout<<arr[i]<<" ";
    cout<<endl;

    
}