

int countOfElements(int arr[], int n, int x) 
{

long long count = 0;
long long i=0;
for(; i<n;i++){
if(arr[i]<=x)
{
    count++;
}
}
return count;
}
