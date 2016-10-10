T = {}
TV = {0}

while(T包含 < n-1 個邊)
{
    另(u,v)為一個邊使得u∈TV且v∉TV//選cost最小的邊
    
    if(沒有這種邊)
        break
    
    把v加入TV
    把(u,v)加入T
}
if(T包含 < n-1 條邊)
    不是生成樹