#include<iostream>
#include<climits>
using namespace std;

//brute force approach
//time complexity:  O(n^2)
//space complexity: O(1) we'll only same no of variables everytime
int findWater(int height[],int n){

	int i,j;
	int leftmax;
	int rightmax;
	int ans=0;
	for(i=0;i<n;i++){

		leftmax=height[i];
		for(j=i-1;j>=0;j--){
			leftmax=max(leftmax,height[j]);
		}

		rightmax=height[i];
		for(j=i+1;j<n;j++){
			rightmax=max(rightmax,height[j]);
		}
		ans+=min(leftmax,rightmax)-height[i];
	}
	return ans;
}

//time complexity:  O(n)
//space complexity: O(n)
int findWater1(int height[],int n){
	int left[n];
	int right[n];

	//calculate left max for every element
	int i;
	left[0]=height[0];
	for(i=1;i<n;i++){
		left[i]=max(left[i-1],height[i]);
	}

	//calculate right max for every element
	right[n-1]=height[n-1];
	for(i=n-2;i>=0;i--){
		right[i]=max(right[i+1],height[i]);
	}

	int water=0;
	for(i=0;i<n;i++){
		water+=min(left[i],right[i])-height[i];
	}
	return water;
} 


//time complexity:  O(n)
//space complexity: O(1)
int findWater2(int arr[], int n) 
{ 
    int result = 0;  
    int left_max = 0, right_max = 0;  
    int lo = 0, hi = n - 1; 
  
    while (lo <= hi) { 
        if (arr[lo] < arr[hi]) { 
            if (arr[lo] > left_max) 
                // update max in left 
                left_max = arr[lo]; 
            else
                // water on curr element = max - curr 
                result += left_max - arr[lo]; 
            lo++; 
        } 
        else { 
            if (arr[hi] > right_max) 
                // update right maximum 
                right_max = arr[hi]; 
            else
                result += right_max - arr[hi]; 
            hi--; 
        } 
    } 
  
    return result; 
} 

int main(){

	int height[]={5,4,2,3,6,7,1,2};
	int n=sizeof(height)/sizeof(int);
	cout<<findWater2(height,n)<<endl;

	return 0;
}