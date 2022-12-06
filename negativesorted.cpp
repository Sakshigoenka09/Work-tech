//Given a sorted array of integers, find the number of negative numbers..
#include<bits/stdc++.h>
using namespace std;
int getNegativeNumbersCount(vector<int> &arr)
{
	int count  = 0 ;
    for(int  i =0 ; i < arr.size() ;  i++)
	{
		if(arr[i] < 0)
			count = count+1;
	}
	return count;
}