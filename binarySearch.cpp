#include<iostream>
using namespace std;

 int search(int nums[], int size, int target) {
        
        int n = 6;
        int start = 0;
        int end = n-1;
        
        int mid = start+(end-start/2);
        
        while(start<=end){
            
            int midElement = nums[mid];
            
            if(midElement == target){
                return mid;
            }
            if(target<midElement){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
            int mid = start+(end-start/2);
            
        }
        
        return -1;
        
    
}
int main(){

    int n = 6;
    int nums[n]={3,6,8,9,13,15};
    int target = 13;

    search(nums, n, target);
    cout<<search<<endl;

   

}
