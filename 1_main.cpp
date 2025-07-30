#include<iostream>
using namespace std;
int main(){
    //for
    // for(int count=1 ; count<=10; count=count+1){
    // cout<<"MAYANK"<<endl;
    // }
    //Counting from 1 to 10
    //break
    // for(int i=0; i<=10; i++){
    //     cout<<i<<endl;
    //     if(i==5){
    //         break;
    //     }
       
    // }
    //continue
    // for (int i = 1; i <=5; i++)
    // {
    //    if(i==4){
    //     continue;
    //    }
    //    cout<<i<<endl;
    // }
    //WHILE
    // int i=1;
    // while (i<11)
    // {
    //    cout<<i<< " ";
    //    i=i+1;
    // }
    // int i=100;
    // while(i>=1){
    //     cout<<i<<" ";
    //     i--;
    // }
    int m;
    cout<<"Enter number for table : ";
    cin>>m;  
    // for(int i=1; i<=10; i++){
    //     cout<<m<< "X"<< i<< "="<< m*i<<endl;
    // }
    //BY while loop
    int i=1;
    while(i<11){
        cout<<m<< "X"<< i<< "="<< m*i<<endl;
        i++;
    }
    return 0;
}