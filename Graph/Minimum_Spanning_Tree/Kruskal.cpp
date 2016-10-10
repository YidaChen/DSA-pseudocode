T = {}
while(T包含 < n-1條邊 && E非空)
{
    從E中移出花費最小邊(v, w)
    
    if((v,w在T中不會形成迴路))
        把(v,w)加進T    
}
if(T包含 < n-1個邊)
    不是最小生成樹
------------------------------
void KruskalMST(Graph *graph)
{
    
    Edge result[V-1]  // Tnis will store the resultant MST
    int e = 0  // An index variable, used for result[]
    int i = 0  // An index variable, used for sorted edges
    
    sort(graph->edge)
    
    Subset *subset = malloc(sizeof(Subset) * V)
    
    for(int v = 0; v < V; v++)
    {
        subset[v].parent = v
        subset[v].rank = 0
    }
    
    while(e < V - 1)
    {
        Edge nextEdge = graph->edge[i++];
        
        int x = find(subset, nextEdge.src);
        int y = find(subset, nextEdge.dest);
        
        if(x != y)
        {
            result[e++] = nextEdge;
            Union(subset, x, y);
        }
    }
    if(result < n-1個邊)
        不是最小生成樹
}
int find(Subset subset[], int i)
{
    if(subset[i].parent != i)
        subset[i].parent = find(subset, subset[i].parent);
        
    return subset[i].parent;
}
void Union(Subset subset[], int x, int y)
{
    int xRoot = find(subset, x);
    int yRoot = find(subset, y);
    
    if(subset[xRoot].rank < subset[yRoot].rank)
        subset[xRoot].parent = yRoot;
        
    else if(subset[xRoot].rank > subset[yRoot].rank)
        subset[yRoot].parent = xRoot;
        
    else {
        subset[yRoot].parent = xRoot;
        subset[xRoot].rank++;
    }
}