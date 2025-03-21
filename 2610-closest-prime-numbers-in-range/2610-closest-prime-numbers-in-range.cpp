class Solution 
{
public:
    vector<int> closestPrimes(int left, int right) 
    {
        vector<int> a(right+1,-1);
          for(int i=2;i<right+1;i++)
          {
               if(a[i]==-1)
               {
                for(int j=i+i;j<right+1;j=j+i)
                {
                    a[j]=1;
                }
               }
          }
          vector<int> arr;
          int n=0;
          int st=left;
          if(st==1)
          {
            st=2;
          }
          for(int i=st;i<right+1;i++)
          {
            if(a[i]==-1)
            {
                arr.push_back(i);
                n++;
            }
          }
          if(n==0 or n==1)
          {
            return {-1,-1};
          }
          int mn=INT_MAX;;
          int p=0,q=0;
          for(int i=0;i<n-1;i++)
          {
            if((arr[i+1]-arr[i])<mn)
            {
                mn=arr[i+1]-arr[i];
                p=arr[i];
                q=arr[i+1];
            }
          }
          return {p,q};
    }
};