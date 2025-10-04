#include<iostream>
#include<stack>
using namespace std ; 

class Stack {
    public:
        int *arr ;
        int size ;
        int top ; 

    Stack(int size){
        this->size = size ; 
        arr = new int[size] ;
        top = -1 ; 
    }

    void push(int element){
        if(size-top > 1){
            top++ ;
            arr[top] = element ;
        }
        else{
            cout<<"Stack OverFlow"<<endl ; 
        }
    }
    
    void pop(){
        if(top >=0){
            top-- ;
        }
        else{
            cout<<"Stack UnderFlow"<<endl ; 
        }
    }

    int peek(){
        if(top >=0){
            return arr[top] ; 
        }
        else{
            cout<<"Stack is empty " <<endl ; 
            return -1 ; 
        }
    }

    bool isEmpty(){
         if(top == -1){
            return true ; 
        }
        else{
            return false ;  
        }
    }
};




int main(){
    // // Using Stl 

    // //creation of stack
    // stack <int> s ; 
    // // push operation
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // // remove operation
    // s.pop() ;
    // if(s.empty()) {
    //     cout<<"stack is empty"<<endl ;
    // }
    // else {
    //     cout<<"stack is not empty"<<endl ;
    // }
    // cout<<"Top element "<< s.top() <<endl ; 
    // cout<<"Size of stack : "<< s.size() <<endl ; 


    //  Without stl 

    Stack st(5) ;
    st.push(22); 
    st.push(25); 
    st.push(28);
    st.push(30);
    st.push(40);
    st.push(28);

    cout<<"Top element "<<st.peek()<<endl ;
    st.pop() ;
    cout<<"Top element "<<st.peek()<<endl ;
    st.pop() ;
    cout<<"Top element "<<st.peek()<<endl ;
    st.pop() ;
    cout<<"Top element "<<st.peek()<<endl ;

    if(st.isEmpty()) {
         cout<<"stack is empty"<<endl ;
     }
     else {
         cout<<"stack is not empty"<<endl ;

    }
    
}