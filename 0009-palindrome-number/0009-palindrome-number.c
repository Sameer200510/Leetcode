bool isPalindrome(int x) {
    int r,temp,s=0;
    temp=x;
    while(x!=0){
        r=x%10;
        if(s>INT_MAX/10||s<INT_MIN/10)
        return false;
        s=(s*10)+r;
        x=x/10;
    }
    if(s<0)
    s=-s;
    if(s==temp){
        return true;
    }
    else if(s==-temp)
    return false;
    else
    return false;
}