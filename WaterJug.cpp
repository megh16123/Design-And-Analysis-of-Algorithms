#include<bits/stdc++.h>
using namespace std;

int partition(pair<int,int>arr[],int low, int high,int pivot){
    int start=low;  
    for(int i=low;i<high;i++){
        if(arr[i].first<pivot){ 
            swap(arr[start],arr[i]);
            start++;
        }else if(arr[i].first==pivot){
            swap(arr[i],arr[high]);
            i--;
        }   
    }
    swap(arr[start],arr[high]);
    return start;
}

void findingPair(pair<int,int>red[],pair<int,int>blue[],int low,int high){
    if(low>=high){  
        return;
    }

    int ran=rand()%(high-low+1)+low;   
    int choosenJug=red[ran].first; 

    int pivot=partition(red,low,high,choosenJug);   
    partition(blue,low,high,choosenJug);   
    
    findingPair(red,blue,low,pivot-1); 
    findingPair(red,blue,pivot+1,high);
}

int main(){
    int n;
    cout<<"Enter the number of jugs: ";
    cin>>n;

    pair<int, int>red[n];
    pair<int, int>blue[n];  
    
    
    for(int i=0;i<n;i++){
        cout<<"\nAmount of water stored in red jug "<<(i+1)<<": ";
        cin>>red[i].first;
        red[i].second=i;    
        cout<<"\nAmount of water stored in blue jug "<<(i+1)<<": ";
        cin>>blue[i].first;
        blue[i].second=i;
    }

    findingPair(red,blue,0,n-1); 

    cout<<"Pair Indices: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"{"<<red[i].second<<" ,"<<blue[i].second<<"}"<<endl;
    }
    cout<<"\nRed Jugs: ";
    for(int i=0;i<n;i++){
        cout<<red[i].first<<"\t";
    }
    cout<<"\nBlue Jugs: ";
    for(int i=0;i<n;i++){
        cout<<blue[i].first<<"\t";
    }
    return 0;
}
