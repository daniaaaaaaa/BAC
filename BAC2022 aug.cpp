II.3
   #include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct meteo 
{ int an, temperatura; 
}x;
/*
<10 RACOROS
>=10 && <=11 NORMAL
>11 CALDUROS
  */
int main() {
if(x.temperatura > 11) cout << "CALDUROS";
else if(x.temperatura < 10) cout << "RACOROS";
else cout << "NORMAL";
 
  return 0;
}

III.1
   void schimb_cata(int &n, int x, int p){
  int e=1,st,dr;
  for(int i=1; i<=p; i++){
    e=e*10;
  }
  dr=n%e;
  st=n/e;
  n=(st/10*10+x)*e+dr;
}

//MADALIN
void schimb(int &n, int p, int x){
    int k = 0, p1 = 1, nr = n, nrn = 0;
    while(nr != 0){
        if(k == p){
            n = n / p1;
            n = (n/10)*10 + x;
            n = n * p1 + nrn;
            break;
        }
        else{
            nrn = (nr % 10) * p1 + nrn;
        }
        k++;
        nr = nr / 10;
        p1 = p1 * 10;
    }
    
}
