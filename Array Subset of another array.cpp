

string isSubset(int a1[], int a2[], int n, int m) 
{
    if(n < m)
        return "No";
    unordered_map <int, int> umap1;
    unordered_map <int, int> umap2;
    
    for(int i=0; i<n; i++)
    {
        umap1[a1[i]]++;
        if(i<m)
            umap2[a2[i]]++;
    }
    
    for(auto x: umap2)
    {
        int k = x.first;
        if(umap1.find(k) == umap1.end())
        {
            return "No";
        }
        if(umap1[k] < x.second)
        {
            return "No";
        }
    }
    return "Yes";
}
