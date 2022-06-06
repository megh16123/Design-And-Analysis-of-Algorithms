//Subset sum problem done by pushpender 3912
#include <iostream>
using namespace std;
 
bool isSubsetSum(int set[], int n, int sum)
{
    bool subset[n + 1][sum + 1];
 
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
 
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
        }
    }
    return subset[n][sum];
}

int main()
{
	int size,sum;
	cout<<"Enter the number of element you want to enter : ";
	cin>>size;
	int set[size];
	cout<<"Enter the elements : ";
	for(int i=0;i<size;i++){
		cin>>set[i];
	}
	cout<<"Enter the sum you want to check: ";
	cin>>sum;
    if (isSubsetSum(set, size, sum) == true)
        cout <<"Found a subset with given sum";
    else
        cout <<"No subset with given sum";
    return 0;
}
