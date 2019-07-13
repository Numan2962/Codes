#include<bits/stdc++.h>
using namespace std;
vector<int>adj[500];
bool visited[100];
int u,v;
void Bfs(int s,int V)
{
    for(int i=0;i<V;i++)
        visited[i]=false;

    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        s=q.front();
        cout<<s<<" ";
        q.pop();

        for(int i=0;i<adj[s].size();i++)
        {
            if(!visited[adj[s][i]])
            {
                visited[adj[s][i]]=true;
                q.push(adj[s][i]);
            }
        }
    }
}
int main()
{
    int v,e,s,a,b;
    cout<<"Number of vertex & edges: ";
    cin>>v>>e;
    cout<<"Edges: "<<endl;
    while(e--)
    {
        cin>>a>>b;
        adj[a].push_back(b);
    }

    cout<<"Starting node: "<<endl;
    cin>>s;
    cout<<"Breadth first Traversal(Starting from "<<s<<"): ";
    Bfs(s,v);
    cout<<endl;


    return 0;
}
