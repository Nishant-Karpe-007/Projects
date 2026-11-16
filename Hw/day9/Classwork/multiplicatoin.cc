#include<iostream>
using namespace std;

int main()
{
  int input;
  int product = 1;
  int temp1=0,temp2=0;
  cout<<"Enter the number: "<<endl;
  cin>>input;
  while(input>10){
          temp1 = input%10;
          product=product*temp1;
          cout<<product;
          temp2++;
          input=input/10;
          if(product>10){
              input=product;
          }
  }
  cout<<product<<endl;
  cout<<temp2<<endl;
}



d[6]={3,35,0,4,10,4,0}
for(int x : d[]){
    if(x!=0){
        cout<<x<<endl;
    }
}