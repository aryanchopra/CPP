#include <iostream>
#include <string>
#include <climits>
using namespace std;

int isPalindrome(string S,int i, int j)
{

    for(i=i;i<=((j+1)/2);i++){
        if(S[i]!=S[j--]){
            return 0;
        }
    }    
    return 1;
}

int main() {
    string s;
    cin>>s;
    int maxlength=INT_MIN,plength;
    int pstart,pend;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(isPalindrome(s,i,j)){
                if(j-i>maxlength){
                    maxlength=j-i;
                    pstart=i;
                    pend=j;
                }
                
            }
        }
    }
    for(int i=pstart;i<pend+1;i++){
        cout<<s[i];
    }
	return 0;
}