#include <fstream>
#include <iostream>
#include <iomanip>
#include<algorithm>
#include <vector>

using namespace std;
 
int main () {
   char data[100];
string filename;
   // open a file in write mode.
   ofstream outfile;
   cout<<"Create a file name: ";
   cin>>filename;
   outfile.open(filename + ".txt");

   outfile << "Last Name"<<setw(17)<< "First Name"<<setw(11)<< "Points"<<setw(8)<< "Grade"<<setw(10)
   << "Percent"<<setw(6)<<"Grade"<<setw(8)<< "Final" << endl;
   
 // open a file in read mode.
   ifstream infile; 
   cout<<"Read a file name: ";
   cin>>filename;
   
   infile.open(filename+".txt"); 
  
   int num = 0;
   vector<float> g1{};
   
   
   while (1) {
			infile >> data;
			if (infile.eof())
				break;

		if(num==2){
			         float myint0 = stof(data);
			         g1.push_back(myint0);
			         num=0;
			        
			   }
			   else{
			        num++;
			    }
			      
			        
   }	    
			   sort(g1.begin(), g1.end(), greater<float>());
		
	
   infile.close();
 
 ifstream insidefile; 
   cout<<"Read a file name again: ";
   cin>>filename;
   insidefile.open(filename+".txt"); 
 
  int num01 = 0;
   
   while (1) {
			insidefile >> data;
			if (insidefile.eof())
				break;

	
	if(num01!=2){
			    outfile <<left<< setw(16)<< data; 
			}
		
			    if(num01==2) {
			       
			       float percent;
			        int total_student = g1.size();
			       
			       float myint1 = stof(data);
			        outfile<<right<< setw(5)<<fixed<<setprecision(2)<<myint1;
			        
			           if(myint1>93)
			         
			                outfile <<left<< setw(9)<<"\tA";
			               
			            
			            if(myint1>90 && myint1<93)
			                outfile <<left<< setw(10)<<"\tA-";
			            
			            if(myint1>87 && myint1<90)
			                outfile <<left<< setw(10)<<"\tB+";
			            
			            if(myint1>83 && myint1<87)
			                outfile <<left<< setw(10)<<"\tB";
			            
			            if(myint1>80 && myint1<83)
			                outfile <<left<< setw(10)<<"\tB-";
			            
			            if(myint1>77 && myint1<80)
			                outfile <<left<< setw(10)<<"\tC+";
			            
			            if(myint1>73 && myint1<77)
			                outfile <<left<< setw(10)<<"\tC";
			            
			            if(myint1>70 && myint1<73)
			                outfile <<left<< setw(10)<<"\tC-";
			            
			            if(myint1>60 && myint1<70)
			                outfile <<left<< setw(10)<<"\tD";
			            
			            if(myint1<60) 
			                outfile <<left<< setw(10)<<"\tF";
			            
			     for(int i=0; i<g1.size(); i++) {
			               
			                    if(g1[i] == myint1) {
			                      
			                       
			                       float percent01 =  total_student - i;
			                       float percent02 = percent01/total_student;
			                       
			                        percent = percent02* 100;
			                       
			                      
			                        if(myint1>93 && myint1<100) {
			                            outfile <<right<<setw(6)<<percent;
			                        }
			                        
			                        else {
			                            outfile <<right<<setw(5)<<percent;
			                        }
			            
			            break;
			           
			                    }
			                        
			         }
			           if(percent>90)
			          
			                outfile <<left<< setw(7)<<"\tA";
			                
			            
			            if(percent>75 && percent<=90)
			                outfile <<left<< setw(8)<<"\tA-";
			            
			            if(percent>60 && percent<=75)
			                outfile <<left<< setw(8)<<"\tB+";
			            
			            if(percent>45 && percent<=60)
			                outfile <<left<< setw(8)<<"\tB";
			            
			            if(percent>35 && percent<=45)
			                outfile <<left<< setw(8)<<"\tB-";
			            
			            if(percent>25 && percent<=35)
			                outfile <<left<< setw(8)<<"\tC+";
			            
			            if(percent>15 && percent<=25)
			                outfile <<left<< setw(8)<<"\tC";
			            
			            if(percent>10 && percent<=15)
			                outfile <<left<< setw(8)<<"\tC-";
			            
			            if(percent>=5 && percent<=10)
			                outfile <<left<< setw(8)<<"\tD";
			            
			            if(percent<5) 
			                outfile <<left<< setw(8)<<"\tF";
			                
			                if(myint1<60) 
			                outfile <<left<< setw(10)<<"\tF"<<endl;
			                
			                 if(myint1>60 && percent>90)
			           
			                outfile <<left<< setw(10)<<"\tA"<<endl;
			                
			            
			            if(myint1>60 && percent>75 && percent<=90)
			                outfile <<left<< setw(10)<<"\tA-"<<endl;
			            
			            if(myint1>60 && percent>60 && percent<=75)
			                outfile <<left<< setw(10)<<"\tB+"<<endl;
			            
			            if(myint1>60 && percent>45 && percent<=60)
			                outfile <<left<< setw(10)<<"\tB"<<endl;
			            
			            if(myint1>60 && percent>35 && percent<=45)
			                outfile <<left<< setw(10)<<"\tB-"<<endl;
			            
			            if(myint1>60 && percent>25 && percent<=35)
			                outfile <<left<< setw(10)<<"\tC+"<<endl;
			            
			            if(myint1>60 && percent>15 && percent<=25)
			                outfile <<left<< setw(10)<<"\tC"<<endl;
			            
			            if(myint1>60 && percent>10 && percent<=15)
			                outfile <<left<< setw(10)<<"\tC-"<<endl;
			            
			            if(myint1>60 && percent>=5 && percent<=10)
			                outfile <<left<< setw(10)<<"\tD"<<endl;
			            
			            num01 = 0;
			            
			        }
			        
			    else{
			        num01++;
			    }
	
		}
   
   insidefile.close();
   outfile.close();

   return 0;
}
