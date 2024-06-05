// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include<iostream>
using namespace std;
float & temp(float&a,float&b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
float t, t1,t2;
cout<<"Enter two temperatures: "<<endl;
cin>>t1;
cin>>t2;

cout<<"Enter a value: "<<endl;
cin>>t;
cout<<t1<<" "<<t2<<endl;
temp(t1,t2) = t;
cout<<t1<<" "<<t2<<endl;
}