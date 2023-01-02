#include<iostream>
#include<ctime>
#include<algorithm>
#include <vector> 

using namespace std;

int WHITEBALLS = 69;
int WHITEPICKS = 5;
int REDBALLS = 26;
int play;
int i;
int j;
int k; 

int main(){

srand(time(NULL));

cout<<"How many games would you like to play? ";

cin>>play;

while(i<play) {

cout<<endl<<"White Balls are: ";
i++;
vector<int> nums = { };
int b;
while(j<WHITEPICKS) {
    int maricoJohn = 0;
    b= (1+ (rand()%WHITEBALLS));
    
    for(int l= 0; l< nums.size(); l++){
        if(nums[l]==b){
            maricoJohn = 1;
         break;
           // l = l + 1;
           // nums.push_back(b);
            //cout<<""<< nums[l]<< " ";
        }
    }
    if(maricoJohn==0){
        nums.push_back(b);
        
    j++;
    }
    //int c= b;
    //sort(nums.begin(), nums.end());
}

    int n = (nums.size());
    
    sort(nums.begin(), nums.end());
    for(int l= 0; l< n; l++){
        while(nums[l]==nums[l+1])
         
            l = l + 1;
            cout<<""<< nums[l]<< " ";
        }
     
     j=0;

cout<<" Power Ball is: "<<(1+ (rand()%REDBALLS))<<endl;

}

return 0;

}