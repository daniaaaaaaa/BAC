II 5.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char a[101],n;
  int k=0,ok=1;
  cin.get(a,100);
  for(int i=0;i<strlen(a);i++){
    if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
      k++;
    }
    if(strchr("aeou",a[i])!=NULL){
      ok=0;
    }
  }
  if(k==0){
    ok=0;
  }
  if(ok==0){
    cout<<"NU";
  }
  else{
    cout<<"DA";
  }
}

III.3 fara functie!!!!!
  #include <iostream>
using namespace std;
int main() {
  int n,c,k=0;
  cin>>n;
  while(n!=0){
    c=n%10;
    n=n/10;
    if(c==2||c==3 || c==5 || c==7){
      k++;
        
    }
  }
  cout<< k; 
    
}
