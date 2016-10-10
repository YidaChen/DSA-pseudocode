void bfs(int v)
{
    bool visited[Vertices] = {false}
    queue<int> q
    
    visited[v] = true
    q.push(v)
    
    while(q.size())
    {
        v = q.pop()
        cout << v->vertex
        
        for(w = adj[v].begin(); w; w = w->link) //nodePointer w
            if(!visited[w])
                visited[w] = true
                q.push(w)
    }
}