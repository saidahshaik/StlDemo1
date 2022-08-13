#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40,23,4,22};
    int sum=0;
    cout<<"v1:{"<<endl;
    for_each(begin(v1),end(v1),[&sum](const auto& x){cout<<x<<" ";sum +=x;});
    cout<<"}"<<endl;
    cout<<"Sum of vector elements:"<<sum<<endl;
    cout<<endl;
    return 0;
}