// You are given a sack which can hold grain of weight w. You have grains of n different varieties,
//  each weighing weighti kg and having a value of 
//  ₹ moneyi. What is the maximum worth of grain the sack can be filled with?

/* This is the Grain class definition
class Grain {
public:
    int weight, value;
	
    Grain(int weight, int value) {
        this->weight = weight;
        this->value = value;
    }
};

*/
#include<bits/stdc++.h>
using namespace std;

bool comp(Grain* &g1, Grain* &g2)
{
   return ((double)g1->value/(double)g1->weight*1.0) > ((double)g2->value/(double)g2->weight*1.0);
}	
double maxSackValue(vector<Grain*> &grains, int w)
{
	double current_limit=0 ;
	int i = 0;
	double total_profit=0 ;
	// vector<Grain*>g;
	// double ratio=0;
	
	// for(int i  = 0 ; i < grains.size() ; i++)
	// {
	// 	 g[i].ratio = (grains[i]->value / (grains[i]->weight*1.0));
	// }
	sort(grains.begin() , grains.end() , comp );
	for(  i = 0 ; i  < grains.size() ;  i++)
	{
		if( current_limit<=w)
		{
			total_profit += grains[i]->value;
			current_limit += grains[i]->weight;
		}
		else
			break;
	}
	if ( i < grains.size())
    {
        int ll = w - current_limit;
        total_profit += ll * ((grains[i-1]->value)/(grains[i-1]->weight*1.0));
    }
	return total_profit;
}	