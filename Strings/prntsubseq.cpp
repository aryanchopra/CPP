#include <iostream>
using namespace std;
void print_subs(string input, string output){
    if(input.length()==0){
        cout<<output<<" ";
        return;
    }
    print_subs(input.substr(1),output);
    print_subs(input.substr(1),output+input[0]);
}
int main(){
    string input;
    string output="";
    cin>>input;
    print_subs(input,output);   
}