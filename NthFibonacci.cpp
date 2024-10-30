#include<iostream>
using namespace std;

int Nthfibonacci(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	int a0 = 0;
	int a1 = 1;
	int an{};
	for (int i = 2; i <= n; i++)//2 elements excluded
	{
		an = a0 + a1;
		a0 = a1;
		a1 = an;
	}

	return an;
}

int main()
{
	for (int i = 0; i <= 10; i++)
		cout<<Nthfibonacci(i)<<" ";
}
