// CPP program to find all indices of a number
#include <bits/stdc++.h>
using namespace std;

// A recursive function to find all
// indices of a number
int AllIndexesRecursive(int input[], int size,
					int x, int output[])
{
	
	// If an empty array comes
	// to the function, then
	// return zero
	if (size == 0) {
		return 0;
	}

	// Getting the recursive answer
	int smallAns = AllIndexesRecursive(input + 1,
									size - 1, x, output);
    return smallAns;
}
int main(){
    int input[7] ={1,1,2,1,3,3,2};
    int size =7;
    int x=1;
    int output[7];
    cout<<AllIndexesRecursive(input,size,x,output);
}