#include <iostream>

using namespace std;

void show(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}




int insertionSort(int array[], int n)
{
    int key;
    int passes = 0,comparisons = 0;
    cout << "Intermediate values \n";
    for(int i = 1; i<n; i++)
    { 
        key = array[i]; 
        int j = i-1; 
        passes++;
        while (j >= 0 && array[j] >= key)
        { 
            comparisons++;
            array[j+1] = array[j]; 
            j -= 1; 
        }
        if(j>=0){
            comparisons++;
        }
        array[j+1] = key; 
        cout<<"\n";
        show(array,n);
    }
    cout << "\nNumber of comparisons ->" << comparisons;
    return passes;
}

int main(){
    int BIP,WIP;
    int best_array[] = {1,2,3,4,5},worst_array[] = {5,4,3,2,1}; 
    cout << "\nInsertion Sort\n";
    BIP = insertionSort(best_array,5); 
    cout<<endl; 
    WIP = insertionSort(worst_array,5);  
    cout<<"\nNumber of passes(Best Case) -> "<<BIP;
    cout<<"\nNumber of passes(Worst Case) -> "<<WIP;
}

