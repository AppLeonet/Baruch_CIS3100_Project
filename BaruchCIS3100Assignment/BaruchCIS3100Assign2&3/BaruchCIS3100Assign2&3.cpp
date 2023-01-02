//Online resources: cppreference.com

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    float amt;
    double r;
    int y;
    int i=1;
    double p;
    string file_name;
  char s= '$';
    do{
         cout<<"Enter loan amount (1-9999999), for example 300000.90: ";
    cin>> amt;
    
    if(amt>0 && amt<= 9999999) 
   
    break;
    }
    while(1);
   
    
    do{
        
    cout<<"Enter annual interest rate (1-30), for example 4.25 meaning 4.25%: ";
    cin>> r;
    
    if(r>0 && r<=30)
    break;
   
    }   
    
   while(1);
   
   do{
       cout<< "Enter no. of years as integer (1-99), for example 30: ";
       cin>> y;
       
       if(y>=1 && y<=99)
       break;
       
   }
   while(1);
   
   do{
       cout<<"Enter additional principal per month (1-9999999), for example 300: ";
       cin>> p;
       
       if(p>0 && p<= 9999999 ) {
           
       break;
       }
       
       }
   while(1);

  cout<< "Send the mortgage amortization table to a file (enter file name): ";
  cin>> file_name;
  cout<<endl;
//float r1 = r;
double rate= r/100.00;
   double monthlyPayment =  (amt * rate/12)/(1-1/pow(1+rate/12,y*12));
   
   double monthlyrate = r/12;
   long double actual_payment= monthlyPayment + p;
   
fstream FileName;
  FileName.open(file_name, ios::app);
  
  
  cout<< setw(40)<<"MORTGAGE AMORTIZATION TABLE"<<endl;
  FileName<< setw(40)<<"MORTGAGE AMORTIZATION TABLE"<<endl;
  
  cout<< endl;
  FileName<< endl;
 
  locale::global(locale(""));
  cout.imbue(locale());
  FileName.imbue(locale());
  
  cout<<"Amount:"<<setw(20)<<"$"<<setw(12)<<fixed<<setprecision(2)<<amt<<endl;
  FileName<<"Amount:"<<setw(20)<<"$"<<setw(12)<<fixed<<setprecision(2)<<amt<<endl;

  cout<<"Interest Rate:"<<setw(12)<<""<<r<<'%'<<endl;
  FileName<<"Interest Rate:"<<setw(12)<<""<<r<<'%'<<endl;
  
  cout<<"Term(Years):"<<setw(14)<<""<<y<<endl;
  FileName<<"Term(Years):"<<setw(14)<<""<<y<<endl;
 
  cout<<"Monthly Payment:"<<setw(11)<<'$'<<setw(12)<<fixed<<setprecision(2)<<monthlyPayment<<endl;
  FileName<<"Monthly Payment:"<<setw(11)<<'$'<<setw(12)<<fixed<<setprecision(2)<<monthlyPayment<<endl;
  
  cout<<"Additional Principal:"<<setw(6)<<'$'<<setw(12)<<p<<endl;
  FileName<<"Additional Principal:"<<setw(6)<<'$'<<setw(12)<<p<<endl;
  
  cout<<"Actual Payment:"<<setw(12)<<'$'<<setw(12)<<actual_payment<<endl;
  FileName<<"Actual Payment:"<<setw(12)<<'$'<<setw(12)<<fixed<<setprecision(2)<<actual_payment<<endl;
  
  cout<<endl;
  FileName<<endl;
  
  cout<<setw(23)<<"Principal"<<setw(17)<<"Interest"<<setw(17)<<"Balance"<<endl;
  FileName<<setw(23)<<"Principal"<<setw(17)<<"Interest"<<setw(17)<<"Balance"<<endl;
  

  double interest_payment= amt* monthlyrate/100.00;
   double principal_payment= actual_payment- interest_payment;
   double remaining_balance= amt- principal_payment;


  for(int i= 1; i<=y*12, remaining_balance>=0 ; i++){

   cout<<i;
   FileName<<i;
  
      if(s=='$'){
    cout<< setw(8)<< s<<setw(13)<<fixed<< setprecision(2)<<principal_payment<<setw(3)<<s<<setw(15)<<fixed<< setprecision(2)<<interest_payment<<setw(3)<<s<<setw(17)<<fixed<< setprecision(2)<<remaining_balance<<endl;

        FileName<< setw(8)<< s<<setw(13)<<fixed<< setprecision(2)<<principal_payment<<setw(3)<<s<<setw(15)<<fixed<< setprecision(2)<<interest_payment<<setw(3)<<s<<setw(17)<<fixed<< setprecision(2)<<remaining_balance<<endl;
    break;
  }
  }
  
  
  for(int i= 2; i<=y*12, remaining_balance>=0 ; i++){

    double newRemain_balance= remaining_balance;
    interest_payment= remaining_balance* monthlyrate/100.00;
    principal_payment= actual_payment- interest_payment;
    remaining_balance= remaining_balance- principal_payment;


    if(i>=1 && i<=9) {
       cout<<i;
       cout<<setw(21)<<fixed<< setprecision(2)<<principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;

      FileName<<i;
  FileName<<setw(21)<<fixed<< setprecision(2)<<principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;
      }
      
    else if(i>=10 && i<=99) {
     FileName<<i;
      FileName<<setw(20)<<fixed<< setprecision(2)<< principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;

      cout<<i;
      cout<<setw(20)<<fixed<< setprecision(2)<< principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;
    }
      
    else if(i>=100 && i<=999) {
      cout<<i;
      cout<<setw(19)<<fixed<< setprecision(2)<< principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;

      FileName<<i;
      FileName<<setw(19)<<fixed<< setprecision(2)<< principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;
    }
      
    else {
      cout<<i;
      cout<<setw(18)<<fixed<< setprecision(2)<< principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;

      FileName<<i;
      FileName<<setw(18)<<fixed<< setprecision(2)<< principal_payment<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<remaining_balance<<endl;
    }

    newRemain_balance= remaining_balance;
    interest_payment= remaining_balance* monthlyrate/100.00;
  double remaining_balance01= remaining_balance- principal_payment;
    double newestRemain_balance= remaining_balance-newRemain_balance;
  
if(remaining_balance01<=0){
  if(i>=1 && i<=9) {
  cout<<++i;
    cout<<setw(21)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;

    FileName<<i;
    FileName<<setw(21)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;
    }

  else if(i>=10 && i<=99) {
     cout<<++i;
      cout<<setw(20)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;

    FileName<<i;
      FileName<<setw(20)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;
    }

  else if(i>=100 && i<=999) {
      cout<<++i;
      cout<<setw(19)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;

    FileName<<i;
      FileName<<setw(19)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;
    }

  else {
      cout<<++i;
      cout<<setw(18)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;

    FileName<<i;
      FileName<<setw(18)<< newRemain_balance<<setw(18)<<fixed<< setprecision(2)<< interest_payment<<setw(20)<<fixed<< setprecision(2)<<newestRemain_balance<<endl;
    }
 
  break;
    }
  
   }
  
       return 0;
}
