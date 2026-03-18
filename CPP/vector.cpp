#include<iostream>
#include<vector>

using namespace std;

int main(){
    int count;
    cout<<"Enter the number of values: ";
    cin>>count;

    vector<int> arr(count);

    for(int &i : arr){
        cin>>i;
    }
    cout<<"size: "<<arr.size()<<endl;
    for(int i:arr){
        cout<<i<<endl;
    }

    return 0;
}