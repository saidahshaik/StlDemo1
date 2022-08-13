#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40,23,4,22};
    cout<<"v1:{";
    for_each(begin(v1),end(v1),[](const auto& x){cout<<x<<" ";});
    cout<<"}"<<endl;
    cout<<endl;
    return 0;

}