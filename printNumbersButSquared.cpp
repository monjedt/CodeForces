#include<string>
#include <iostream>
#include<algorithm>
#include<stack>
using namespace std; 
int main()
{
	stack<int> stack; 
	int x; 
	int n; cin >> n; 
	string s; 
	string ns ="";
	s = to_string(n); 
	for ( int  i = 0; i < s.length(); i++)
	{
		x = n % 10; 
		stack.push(x * x); 
		n = n / 10; 

		
	}
	while(!stack.empty())
	{
		ns += to_string(stack.top());
		stack.pop(); 
	}
	//reverse(ns.begin(), ns.end()); 
	cout << ns << endl;
	return 0; 
}

