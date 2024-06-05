#include<iostream>
const float net = .9;
using namespace std;
inline float netSalary(float sal){
return net*sal;
}
int main(){
    float sal;
    cout<<"Enter the salary: "<<endl;
    cin>>sal;
    cout<<"The net salary of employee: "<<netSalary(sal)<<endl;
}