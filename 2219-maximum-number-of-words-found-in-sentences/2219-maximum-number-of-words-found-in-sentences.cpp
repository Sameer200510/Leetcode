class Solution {
public:
    int mostWordsFound(vector<string>& s) 
    {
      int i,j,y=0;
    for(i=0;i<s.size();i++){
        string t=s[i];
        int j=0;
        int z=0;
        while(j<t.size()){
          if(t[j]==' '){
              z++;
              j++;
          }
          j++;
        }
        if(z>y){
            y=z;
        }
        }
    
  return y+1;
        
    }
};