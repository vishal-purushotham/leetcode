#include <bits/stdc++.h> 
void insertstack(stack<int>&stack,int a){
	vector<int>v;
	while(!stack.empty() && a<stack.top()){
    	v.push_back(stack.top());
    	stack.pop();
	}
	stack.push(a);
	for(int i=v.size()-1;i>=0;i--){
		stack.push(v[i]);
	}
	return;
}

void sortStack(stack<int> &stack){
    if(stack.empty()){
        return ;
    }
    int a=stack.top();
    stack.pop();
    sortStack(stack);
    insertstack(stack,a);
    return;
}