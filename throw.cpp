#include<iostream>
using namespace std;
int main()
{   
    int b;
    cout<<"enter any no:1,2,3 \n";
    cin>>b;
    try
    {
        if(b==1)
    {
        throw 'a';
    }
    else if(b==2){
        throw 34.56;
    }
    else if(b==3){
        throw 3 ;
    }
cout<<"welcome \n";}
catch(int n){
    cout<<"integer value"<<"\n";
}
catch(char n){
    cout<<"\n char value"<<"\n";
}
catch(double n){
    cout<<"\n float value"<<"\n";
}
// or
// catch(...){
//     cout<<"server down"<<"\n";
catch(char n){
    cout<<"\n char value"<<"\n";
}
catch(double n){
    cout<<"\n float value"<<"\n";
}
cout<<"\n finished";
}


   
    
