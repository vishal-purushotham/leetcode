void helper(int index,int sum, vector<int> &num, vector <int> &ans){
	if(index==num.size()){
		ans.push_back(sum);
		return;
	}
	//include element in current sum
	helper(index+1,sum+num[index],num,ans);
	//exclude
	helper(index+1,sum,num,ans);
}
vector<int> subsetSum(vector<int> &num){
	vector <int> ans;
	helper(0,0,num,ans);
	sort(ans.begin(),ans.end());
	return ans;	
}