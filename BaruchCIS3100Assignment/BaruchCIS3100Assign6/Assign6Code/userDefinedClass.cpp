#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iterator>
#include <set>
#include <algorithm>
#include<numeric>
#include<iomanip>

using namespace std;

class wordObject;

vector<wordObject> wordVector;

class wordObject {
    public:
    string word;
    int times;
    
    
    wordObject(string _word, int _times) {
        word = _word;
        times = _times;
        wordVector.push_back(*this);
      }
};

struct lowerThanWord
{
    inline bool operator() (const wordObject& l, const wordObject& r)
    {
        return (r.times < l.times);
    }
};


void uniqueObject(){
       string filename;
       int t;
    map<string, int> words;
    int count=0;
    
       ifstream input; 
   cout<<"Enter the source data file name: ";
   cin>>filename;
   
   input.open(filename); 
   string unit;
   vector<vector<string>> vect{};
   int size;
   while(!(size>=1 and size<=5)){
       cout<<"How many Adjacent words in a phrase, enter 1-5: ";
   cin>> size;
   }
   	vector<string> v2;
	for(int i =  0 ; i < size; i++){
	    vect.push_back(v2);
	    
	}
	
	int begin = 0;
   while (input >> unit) {
        
        std::transform(unit.begin(), unit.end(),unit.begin(), ::toupper);
   unit.erase(remove_if(unit.begin(), unit.end(),
                                [](char ch) { return !static_cast<int>(isalpha(ch) || (isdigit(ch))); }),
                 unit.end());
                 
                 if (unit.size()!=0){
                    
            count++;
	
        if(begin < size){
	        for(int j = 0; j < begin+1; j++){
	            vect[j].push_back(unit);
	            
	            if(vect[j].size() == size){
	                string text = "";
	                for(int k = 0; k < vect[j].size(); k++){
	                    text = text + " " + vect[j][k];
	                }
	                
	                vect[j].clear();
	                
	                auto it = words.find(text);  
        words[text] += 1;
       
        }
	        }
	        begin++;
	    }else{
	        for(int j = 0; j < size; j++){
	            if(vect[j].size() < size){
	                vect[j].push_back(unit);
	                if(vect[j].size() == size){
	                    string text = "";
    	                for(int k = 0; k < vect[j].size(); k++){
    	                    text = text + " " + vect[j][k];
    	                }
	                    
	                    vect[j].clear();
	                    if (text.size()!=0){
       
       if (words.count(text) > 0){
        auto it = words.find(text);  
        words[text] += 1;
     }
    else{
        
        words[text] += 1;
    }
   }
	                }
	            }
	        }
	    }
	    
	     }
   }
  
  for (auto const &pair: words) {
        
    }
    for (string line; getline(input, line);)
    {
        istringstream iss(line);
        vector<string> tempwords;
        copy(istream_iterator<string>(iss),
                  istream_iterator<string>(),
                  back_inserter(tempwords));
                    }
for (auto const &x : words)
    {
        wordObject(x.first, x.second);
    }
                  
    sort(wordVector.begin(), wordVector.end(), lowerThanWord());
    string filename1;
    ofstream outfile;
   cout<<"Enter the phrase frequency file name: ";
   cin>>filename1;
   outfile.open(filename1, fstream::app);
   outfile<<"The file: "<<filename<<" contains "<<count<<" Words." <<endl;
outfile<<"There are "<<words.size()<< " unique terms."<<endl;
outfile<<"\n";
for (auto i : wordVector) {
        
         t= i.word.length();
             if(i.times>99 and i.times<1000)
             outfile<< i.word<<" "<<right<<setw(60-t)<< i.times<< endl;
             
             if(i.times>1 and i.times<10)
             outfile<< i.word<<" "<<right<<setw(60-t-2)<< i.times<< endl;
             
         if(i.times>9 and i.times<100)
         outfile<<i.word<<" "<<right<<setw(60-t-1)<< i.times<< endl;
         if(i.times==1)
             outfile<< i.word<< endl;
         
         }
}
int main() {

 uniqueObject();
}
