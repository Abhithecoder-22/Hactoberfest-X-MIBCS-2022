#include<iostream>
using namespace std;
int joshephus(int n,int k){
    if(n==1){
   return 0;
    }
    
return (joshephus(n-1,k)+k)%n;
}

int index(int n, int k){
    return joshephus(n,k)+1;
}
int main(){
    joshephus(3,2);
}