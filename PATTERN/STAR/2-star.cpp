#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int row=n;
    while(row>0){
        int col=row;
        while(col>0){
            cout<<"x";
            col--;
        }
        cout<<endl;
        row--;
    }
}

// The output is:-
// x x x x
// x x x
// x x
// x
