#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a=5;
	int* p=&a;
	int** q=&p;
	cout<<* p<<endl;//derefrancing the p at a and hence printing the value at a
	cout<<**q<<endl;//double dereferencing at q and hence printing the value at a
	cout<<p<<endl;//print the adress stored at p
	cout<<**q<<endl;//print the value at a because dereferencing at a
	cout<<*q<<endl;//print the value at p that is adress stored at p becaus of the dereferencing the operator at p

}
