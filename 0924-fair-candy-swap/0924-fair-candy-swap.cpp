class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
           int sA = 0;
		int sB = 0; 
		for(int i = 0; i < aliceSizes.size(); i++){
			sA += aliceSizes[i];
		}
		for(int i = 0; i < bobSizes.size(); i++){
			sB += bobSizes[i];
		}
		
		int d = (sA - sB) / 2;

		
		set<int> bob;
		for(int i = 0; i < bobSizes.size(); i++){
			bob.insert(bobSizes[i] + d);
		}
		for(int i = 0; i < aliceSizes.size(); i++){
			if(bob.find(aliceSizes[i]) != bob.end()){    
				return {aliceSizes[i], aliceSizes[i] - d};
			}
		}
		return {};
    }
};