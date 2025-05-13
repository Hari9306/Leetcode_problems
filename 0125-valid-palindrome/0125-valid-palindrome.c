bool isPalindrome(char* s) {
    int len1=strlen(s);
    if(len1==1) return true;
    char str[len1+1];
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z'){
            str[j]=s[i]+'a'-'A';
            j++;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            str[j]=s[i];
            j++;
        }
        else if(s[i]>='0'&&s[i]<='9'){
            str[j]=s[i];
            j++;
        }
    }
    str[j]='\0';
    int len=strlen(str);
    for(int j=0;j<len/2;j++){
        if(str[j]!=str[len-j-1]){
            return false;
        }
    }
    return true;
}