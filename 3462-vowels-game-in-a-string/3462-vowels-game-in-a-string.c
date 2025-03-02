bool doesAliceWin(char* s) {
    int c=0;
    if(strlen(s)==1){
        if(!strcmp(s,"a")||!strcmp(s,"e")||!strcmp(s,"i")||!strcmp(s,"o")||!strcmp(s,"u")){
            return 1;
        }
        else{
            return 0;
        }
    }
    for(int i=0,j=strlen(s)-1;i<strlen(s)/2,j>=strlen(s)/2;i++,j--){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            c++;
        }
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
            c++;
        }
    }
    if(c==0)
    {
        return 0;
    }
    return 1;
}