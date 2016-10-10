bool visited[Vertices] = {false} //Number of vertices

void dfs(int v)
{
    visited[v] = true
    cout << v->vertex
    
    for(w = adj[v].begin(); w; w = w->link) //adjacency lists, nodePointer w
        if(!visited[w])
            dfs(w)
}