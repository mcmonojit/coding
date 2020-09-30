/* PROGRAM TO DEMONSTRATE A HEAP DATA STRUCTURE AND ITS VARIOUS OPERATIONS*/
//A MAX HEAP IS CONSIDERED HERE //
#include <bits/stdc++.h>
using namespace std;
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
#define ll long long int
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second

void insert(int a[], int i);
void deleteheap(int a[], int n);

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[] = {0, 10, 30, 40, 25, 5, 18, 35, 17};
	for (int i = 2; i <= 7; i++)
	{
		insert(a, i);

	}
	for1(i, 7)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	deleteheap(a, 7);
	for1(i, 6)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << a[7];
}

//Insertion in a Heap
void insert(int a[], int n)
{
	int temp = a[n];
	int i = n;
	while (i > 1 && temp > a[ i / 2])
	{
		a[i] = a[i / 2];
		i =  i / 2;
	}
	a[i] = temp;

}


// to Delete an element from a Heap

void deleteheap(int a[], int n)
{
	a[1] = a[n];
	int flag;
	int i = 1;
	int j = 2 * i;
	while (j < n - 1)
	{
		if (a[j] < a[j + 1])
			j = j + 1;
		if (a[j] > a[i])
		{
			flag = a[j];
			a[j] = a[i];
			a[i] = flag;
			i = j;
			j = 2 * j;

		}
		else break;
	}

}
