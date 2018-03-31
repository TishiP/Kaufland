#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int random_number,num;
	random_number=rand() % 100 + 1;
	int att=0;
	 while(true)
	 {
	 	cout<<"Guess number:";
	 	cin>>num;
	 
	  if( num==random_number)
	   {
	   	 att++;
	   	 cout<< "Correct,att"<<att<<endl;
	   	 break;
	   }
	    else if(num<random_number)
	    {
	    	att++;
	    	cout<<"Low"<<endl;
		}
		 else if(num>random_number)
		 {
		 	att++;
		 	cout<<"High"<<endl;
		 }
		 
	}
		 
	return 0;
}
