#include<iostream>
#include<vector>

using namespace std;

// detecting the cycle using DFS in an undirected graph
void cycle_det(vector<vector<int>> &adj_list, vector<bool> &visited, int curr_node, int curr_parent, bool &isFound){
	if(isFound) return;
	
	
	visited[curr_node] = true;
	
	for(auto i: adj_list[curr_node]){
		if(!visited[i]){
			cycle_det(adj_list,visited,i,curr_node,isFound);
		}else{
			if(isFound) return;
			
			if(i != curr_parent){
				isFound = true;
				cout<<"\n\n\n!!! Cycle is Found !!!\n\n";
				return;
			}
		}
	}
}

int main(){
	
	cout<<"\t\t !!! NODES ARE 1 BASED INDEXED HERE !!!\n\n";
	cout<<"\t\t !!! PROGRAM FOR CYCLE DETECTION IN AN UNDIRECTED GRAPH !!!\n\n";
	
	// variable to store num of vertices in the graph
	cout<<"Please Enter Number of Vertices :- ";
	int num_ver;	cin>>num_ver;
	
	// variable to store number of edges in the graph
	cout<<"Please Enter Number of Edges :- ";
	int num_edges;	cin>>num_edges;
	if(num_edges < 1) return 0;
	
	// adjaceny list to store edges from one vertex to another vertex
	vector< vector<int> > adj_list(num_ver+1);
	
	int start_node = INT_MAX;
	for(int i=0;i<num_edges;i++){
		cout<<"Please Enter Edge No ";
		i > 2 ? cout<<i+1<<"th " : cout<<( i == 0 ? "1st " : i == 1 ? "2nd " : "3rd " );	
		cout<<" as V1 V2:- ";
		
		// variable to store both the vertices of an edge
		int v1, v2;	cin>>v1>>v2;
		start_node = min(start_node,min(v1,v2));
		
		adj_list[v1].push_back(v2);	adj_list[v2].push_back(v1);
	}
	
	vector<bool> visited(num_ver+1,false);	bool isFound = false;
	cycle_det(adj_list,visited,start_node,start_node,isFound);
	
	if(!isFound){
		cout<<"\n\n\n!!! No Cycle is Found !!!\n\n";
	}
	
	return 0;	
}
