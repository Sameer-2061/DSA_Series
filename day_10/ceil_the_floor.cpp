#include<bits/stdc++.h>
using namespace std;
// Problem Name:Ceil the floor
// Link:https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401
// Code
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low = 0, high = n-1, floor = -1, ceil = -1;
	if(a[0]>x){
		return {-1, a[0]};
	}
	if(a[n-1]<x){
		return {a[n-1],-1};
	}
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]==x){
			return {x,x};;
		}
		else if(a[mid]<x){
			floor = a[mid];
			low = mid+1;
		}
		else{
			ceil = a[mid];
			high = mid-1;
		}
	};
	return {floor,ceil};
}
// TC:O(log(N))
// SC:O(1)

 