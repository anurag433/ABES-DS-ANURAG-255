#include<iostream>
using namespace std;
#include<stack>

int priority(char ch){
    if(ch=='('){
        return 0 ;
    }
    if(ch=='+' || ch=='-'){
        return 1 ;
    }
    if(ch=='*' || ch=='/'){
        return 2 ;
    }
    if(ch=='^'){
        return 3 ;
    }
    return 0 ; 
}

int main(){
    char stack[100];
    string exp ;
    for(int i=0 ; i<exp.length();i++){
        ch = exp[i] ;
        if(ch>='A'&& ch<='Z' || ch>='a' && ch<='z'){
            push(stack,ch) ;
        }
        if(priority(stack[top])> priority(ch)){
            pop(stack[top])
        }
        if(ch=='^'){
            push(ch) ; 
        }
    }
}