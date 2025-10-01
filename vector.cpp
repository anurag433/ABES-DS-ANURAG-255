#include<iostream>
#include<bits/stdc++.h>
using namespace std;    
int main(){
    vector<int> v;
    cout<<"Size of vector: "<< v.size()<<endl;
    cout<<"Capacity of vector: "<< v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size of vector: "<< v.size()<<endl;
    cout<<"Capacity of vector: "<< v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size of vector: "<< v.size()<<endl;
    cout<<"Capacity of vector: "<< v.capacity()<<endl;

    v.push_back(8);
    cout<<"Size of vector: "<< v.size()<<endl;
    cout<<"Capacity of vector: "<< v.capacity()<<endl;

    v.push_back(9);
    cout<<"Size of vector: "<< v.size()<<endl;
    cout<<"Capacity of vector: "<< v.capacity()<<endl;

    for(int i = 0 ; i<v.size(); i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" " ;
        cout<<endl;

    }

    for(auto value:v){
        cout<<value<< " "<< endl ;   
    }

    v.pop_back();
   for(auto value:v)
        cout<<value<< " " ;   
    cout<<endl;
    cout<<"First element: "<< v.front()<<endl;
    cout<<"Last element: "<< v.back()<<endl;
    // isert the element at the beginning
    v.insert(v.begin(), 2);
    for(auto value:v)
        cout<<value<< " " ;   
    cout<<endl;
//  insert 3 11's at index 2
    v.insert(v.begin()+2,3,11);
    for(auto value:v)
        cout<<value<< " " ;   
    cout<<endl;

    
//  erase the first element
    v.erase(v.begin());
    for(auto value:v)
        cout<<value<< " " ;


//  erase the element at index 2
    v.erase(v.begin()+2);
    for(auto value:v)
        cout<<value<< " " ;
    cout<<endl; 


    // erase the element from index 2 to 4
    v.erase(v.begin()+2,v.begin()+4);
    for(auto value:v)
        cout<<value<< " " ;
    cout<<endl;

    //   iterator
    vector<int> :: iterator itr ;
    for(auto itr = v.begin(); itr!=v.end(); itr++){
        cout<<*(itr)<<" ";
    cout<<endl; 
    
    vector<int> :: reverse_iterator rit ;
    for(auto rit = v.rbegin(); rit!=v.rend(); rit++){
        cout<<*(ritr)<<" ";
    }


    return 0;
}
