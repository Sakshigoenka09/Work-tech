// Given a matrix, check if the matrix contains a given key.

// The matrix has the following properties:

// Integer in each row is arranged in non-decreasing order from left to right.
// The first integer in every row is greater than the last integer of the previous row.
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int key)
{
	int n, m;
	n=matrix.size(),m=matrix[0].size();
    for(int i = 0 ; i<n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			if(matrix[i][j]==key)
			{
				return true;
				
			}
		}
	}
	return false;
}