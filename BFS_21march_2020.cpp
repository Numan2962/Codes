#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int s,v,e;
queue<int> q;
int main()
{
    int a,b,k;
    cin>>v>>e;
    vector<bool> used(v);
    vector<int> d(v), p(v);

    k=e;
    while(k--)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=v;i++)
    {
        cout<<i<<" : ";
        for(int j=0;j<adj[i].size();j++)
            cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    cin>>s;
    q.push(s);
    used[s]=true;
    p[s]=-1;
    while(!q.empty())
    {
        int u,v=q.front();
        q.pop();
        for(u=0;u<adj[v].size();u++)
        {
            int l=adj[v][u];
            if(!used[l])
            {
                used[l]=true;
                q.push(l);
                d[l]=d[v]+1;
                p[l]=v;
            }
        }
    }
    int x;
    cin>>x;  ///shortest path 's' to 'x'
    if(!used[x])
        cout<<"No path found!"<<endl;
    else
    {
        vector<int>path;
        for(int v=x; v!=-1; v=p[v])
            path.push_back(v);
        reverse(path.begin(),path.end());
        cout<<"Path : ";
        for(int v=0;v<path.size();v++)
            cout<<path[v]<<" ";
        cout<<endl;
        cout<<"path length: "<<d[x]-d[s]<<endl;
        cout<<endl;
    }
    return 0;
}
