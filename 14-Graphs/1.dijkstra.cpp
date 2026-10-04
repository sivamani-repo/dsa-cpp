#include <bits/stdc++.h>
using namespace std;
// vector<int> dijkstra(int v,vector<vector<int>> adj[],int s)
// {
//   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//   vector<int> dist(v,1e9);
//   dist[s]=0;
//   pq.push({0,s});
//   while(!pq.empty())
//   {
//     int dis=pq.top().first;
//     int node=pq.top().second;
//     pq.pop();
//     if(dis!=dist[node]) continue;
//     for(auto it:adj[node])
//     {
//       int wt=it[1];
//       int adjnode=it[0];
//       if(dis+wt<dist[adjnode])
//       {
//         dist[adjnode]=dis+wt;
//         pq.push({dist[adjnode],adjnode});
//       }
//     }
//   }
//   return dist;ṇ
// }

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  // int v,e;
  // cin>>v>>e;
  // vector<vector<int>> adj[v];
  // for(int i=0;i<e;i++)
  // {
  //   int u,x,w;
  //   cin>>u>>x>>w;

  //   adj[u].push_back({x,w});
  //   adj[x].push_back({u,w});
  // }
  // int s;
  // cin>>s;
  // vector<int> dist=dijkstra(v,adj,s);
  // for(int i=0;i<v;i++)
  //   cout<<(dist[i]==1e9?-1:dist[i])<<' ';
  cout<<"Helloworld";
  return 0;
}