// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.
//1foot = 12 inches
#include<iostream>
using namespace std;

int inches(){
cout<<"1 foot = 12 inches"<<endl;
}
int inches(int ft){
return ft*12;
}
int inches(int &ft,int in){

return ft*12+in;
}
int main(){
    int ft,in;
    cout<<"Enter feet"<<endl;
    cin>>ft;
    cout<<"Enter inches"<<endl;
    cin>>in;
  inches();
  cout<<inches(ft)<<endl;
  cout<<inches(ft,in)<<endl;

}