#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter your rank:-";
  cin>>a;

  if (a<=1 && a>=100)
  {
    cout<<"Your rank is in merit list : VJTI/SPIT/SPPU/PCCOE"<<"\n";
  }

  else if(a<=101 && a>200)
  {
    cout<<"Your rank is in good list: MET/VESIT/COE/NMITD"<<"\n";
  }

  cout<<"Thanks for visiting our website"<<"\n";
    return 0;
}