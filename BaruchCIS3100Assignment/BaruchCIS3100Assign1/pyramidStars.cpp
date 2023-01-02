#include <iostream>

using namespace std;

void myFunction() {
    int num; 
    do {
        cout << "Enter an integer number between 2 and 25: ";
		cin >> num;
		
		if(num>=2 && num<=25)
			break;
    }
	while(1);
    
	for(int i=1; i<=num; i++) {
		
		for(int spc=num; spc>i; spc--)
			cout << ' ';

		for(int star=1; star<=i*2-1; star++)
			cout << '*';

		cout << endl;
	}
	
	for(int i=1; i<=num*2-1; i++) {
	    
		if(i<=num)	{
			for(int star=1; star<=i; star++)
				cout << '*';
		}

		else {
			for(int star=i; star<=num*2-1; star++)
				cout << '*';
		}
		
		cout << endl;
	}
	
	for(int i=num; i>=1; i--) {
	
		for(int spc=num; spc>i; spc--)
			cout << ' ';

		for(int star=1; star<=i*2-1; star++)
			cout << '*';

		cout << endl;
	}
 
	for(int i=1; i<=num*2-1; i++) {
		
		if(i<=num) {
		
			for(int spc=num; spc>i; spc--)
					cout << ' ';
		
			for(int star=1; star<=i; star++)
				cout << '*';
		}
		
		else {
			
			for(int spc=i; spc>num; spc--)
					cout << ' ';

			for(int star=i; star<=num*2-1; star++)
				cout << '*';
		}
		
		cout << endl;
	}
 
}
	
int main()
{
     
        do {
             myFunction();
        string stop;
        cout << "Press any key to continue . . . (-1 to terminate)"<< endl;
        cin>> stop;
        
        if(stop=="-1") 
        break;
        }
       
        while(1);
    
    return 0;
}
