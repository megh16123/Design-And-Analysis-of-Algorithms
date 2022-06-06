// No of connected components in an undirected graph

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

// no of connected components using DFS
void NOCC_dfs(vector<vector<int>> &adj_list, vector<bool> &visited, int curr_node){
	
	visited[curr_node] = true;	
	for(auto ithNode: adj_list[curr_node]){
			if(!visited[ithNode]){
				NOCC_dfs(adj_list,visited,ithNode);
			}
	}
	
}

// no of connected components using BFS
void NOCC_bfs(vector<vector<int>> &adj_list, vector<bool> &visited, int curr_node){
	
	queue<int> my_queue;
	my_queue.push(curr_node);
	while(!my_queue.empty()){	
		int top_node = my_queue.front();	my_queue.pop();
		visited[top_node] = true;	
		
		for(auto i: adj_list[top_node]){
			if(!visited[i]){
				my_queue.push(i);
			}	
		}
	}
	
}

int main(){
	
	// variable to store num of vertices in the graph
	cout<<"Please Enter Number of Vertices :- ";
	int num_ver;	cin>>num_ver;
	
	// variable to store number of edges in the graph
	cout<<"Please Enter Number of Edges :- ";
	int num_edges;	cin>>num_edges;
	if(num_edges < 1) return 0;
	
	
	// adjaceny list to store edges from one vertex to another vertex
	vector< vector<int> > adj_list(num_ver+1);
	
	for(int i=0;i<num_edges;i++){
		cout<<"Please Enter Edge No ";
		i > 2 ? cout<<i+1<<"th " : cout<<( i == 0 ? "1st " : i == 1 ? "2nd " : "3rd " );	
		cout<<" as V1 V2:- ";
		
		// variable to store both the vertices of an edge
		int v1, v2;	cin>>v1>>v2;
		adj_list[v1].push_back(v2);	adj_list[v2].push_back(v1);
	}
	
	vector<bool> visited(num_ver+1,false);
	int NOCC = 0;
	for(int i=1;i<=num_ver;i++){
		if(!visited[i]){
			NOCC++;
			NOCC_dfs(adj_list,visited,i);
		}
	}
	cout<<"\n\n\nNo of connected component using DFS is :- "; cout<<NOCC<<"\n";
	
	for(int i=1;i<=num_ver;i++){
		visited[i] = false;
	}
	
	NOCC = 0;
	for(int i=1;i<=num_ver;i++){
		if(!visited[i]){
			NOCC++;
			NOCC_bfs(adj_list,visited,i);
		}
	}
	cout<<"No of connected component using BFS is :- "; cout<<NOCC<<"\n";
	
	return 0;
}
