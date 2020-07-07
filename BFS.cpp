#include<bits/stdc++.h>
using namespace std;

int main()
{
	int node, edge;
	int a,b;
	cin>>node>>edge;
	
	vector<bool> visited; 
	vector<vector<int> > graph;
	
	visited.assign(node, false);
	graph.assign(node, vector<int>());
	
	for(int i=0;i<edge;i++)
	{
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	for(int j=0;j<node;j++)
	{
		if(visited[j]==false)
		{
		 queue<int> q; 
  
    		q.push(j); 
    		visited[j] = true; 
  
    		while (!q.empty()) { 
  
        		int f = q.front(); 
        		q.pop(); 
  
        		cout << f << " "; 
        		
        	// Enqueue all adjacent of f and mark them visited  
        		for (auto i = graph[f].begin(); i != graph[f].end(); i++) { 
            		if (!visited[*i]) { 
                		q.push(*i); 
                		visited[*i] = true; 
            		}	 
        		}	 
    		}		 
		}
	}
	
	
	return 0;
	 
	
	
}
