#include <iostream>
#include"lib.cpp"
using namespace std;
int main(){
  int dimensione=0;
  cin>>dime nsione;
  float numeri[dimensione];
  for(int i=0; i<dimensione;i++){
    cin>>numeri[i];
  }
  cout<<massimo(numeri,dimensione)<<endl;
  return 0;
}
