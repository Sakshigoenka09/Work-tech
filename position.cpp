//Given a sorted array containing distinct integers and a number 'key', find the index of the key in the array.
//If the key is not present, return the index at which it would be inserted considering that we need to maintain the sort order.

int getInsertPosition(vector<int> &arr, int key)
{
	int count = -1;
   for(int  i = 0 ; i  < arr.size() ;  i++)
   {
	   if(arr[i]  == key)
	   {
		   count  = i;
		   return count;
	   }
	   if(arr[i]<key)
		   {
			   count = i;
		   }
		   
   }
	return count+1;
}