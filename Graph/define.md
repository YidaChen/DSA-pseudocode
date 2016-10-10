頂點的分支度(degree): 進入這個頂點的邊數

七橋問題(尤拉證明):
    從圖任一頂點出發,經過每條邊恰好一次,再回到出發點的路線,
    若且唯若每個頂點的分支度為偶數

Strongly Connected Component(有向圖):
    子圖任兩頂點u,v都有u到v及v到u的路徑

有向無環圖Directed Acyclic Graph(DAG):
    從任意頂點出發無法經過若干條邊回到該點
    
n個頂點的生成樹,有n-1條邊

articulation point:
    刪掉關節點及其上的邊,將產生至少2個連通元件
    
biconnected graph:
    沒有articulation point的圖
    
depth-first-number(dfn):
    DFS走訪頂點的順序號碼
    
back edge:
    不在生成樹裡的邊,若且唯若v,u不同點