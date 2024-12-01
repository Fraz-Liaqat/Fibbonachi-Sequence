


#include<iostream>
#include<vector>
using namespace std;

int nthFibOptimisedUtil(int n,vector<int>& fibArray)
{
	if (n <= 1)
		return n;

	else if (fibArray[n] != -1)//if f(n) already stored:
		return fibArray[n];

	//else find the number and store it
	fibArray[n] = nthFibOptimisedUtil(n - 1, fibArray) + nthFibOptimisedUtil(n - 2, fibArray);
	return fibArray[n];
}
int nthFibonaaciOptimised(int n)
{
	vector<int>myArray(n+1, -1);//stores f(0) to f(n) total n+1 places 
	return nthFibOptimisedUtil(n, myArray);
}
int main()
{
	int n=5;
	cout << nthFibonaaciOptimised(n);
}
 