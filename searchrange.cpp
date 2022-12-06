// Given a sorted array and a number key, find the index of the first and last occurrence of the key in the array.
// If the key is not present, return [-1, -1].



vector<int> searchRange(vector<int> &arr, int key) 
{
	vector<int>ar;
	int temp=0,c=0,t=0,temp1=0;
	for(int  i = 0  ; i < arr.size() ; i++)
	{
		if(arr[i] == key)
		{
			 temp = i ;
			 c=1;
			break;
		}
	}
		for(int i = arr.size()-1 ; i>=0 ; i--)
		{
			if(arr[i]==key)
			{
				temp1 = i;
				t = 1;
				break;
			}
		}
		if(c!=1 && t!= 1)
		{
			temp = -1;
			temp1 = -1;
		}
		
	    ar.push_back(temp);
		ar.push_back(temp1);
	    return ar;
	
}