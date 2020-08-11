int removearrayelement(int a[],int N,int x)
{
    
}
int remove_duplicate(int a[],int N)
{
    int freq[N+1];
    int c=0;
    for(int i=0;i<N;i++)
    {
        freq[a[i]++];
        
    }
    for(int i=0;i<N;i++)
    {
        if(freq[i]>1)
            removearrayelement(a,N,a[i]);
            
    }
    for(int i=0;i<N;i++)
    {
        if(a[i]!=-11111)
        {
            c++;
        }
    }
    return c;
    
//Your code here
}