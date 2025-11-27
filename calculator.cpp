#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib> 
#include <cmath>
#include <cstring> 
#include <sstream>
using namespace std;
void sub(float a);
void add (float a);
void mul(float a);
void div(float a);
bool parsfloat(const string &s,float &out);
int main()
{
	string s;
	bool flag;
	float a=0;
	while (1)
    	{
       	  do{
        	cout<<"enter number: ";
	      getline(cin,s);
	       flag=parsfloat(s,a);
			 }while(!flag);
	        
        cout<<"+  -  *  /   ? - for exit enter n\n";
        char ch=_getch();
        switch (ch)
          {
         	case '-': sub(a); break;
         	case '+': add(a); break;
        	case '*': mul(a); break;
        	case '/': div(a); break;
        	case 'n':
        	case 'N': cout<<"\ngodbye \n";
     
                    	exit(0);
  
   
        	default : 
   	
	           continue;


   }
	cin.clear();
	cin.ignore(1000,'\n');
   
	}
       getch();
       return 0;
}
///////////
bool parsfloat(const string &s,float &out)
{   
	stringstream ss(s);
	ss>>out;
    if(ss.fail())
      return false;
    char c;
    if(ss>>c)
       return false;
 
	
	return true;
}
///////////////////////////////
void sub(float a)
{
	float b;
	cout<<endl<<"enter second number : ";
		if(cin>>b)
	cout<< a-b<<endl;
	else
	 cout<<"not valid entry!";
}
//////////////
void add (float a)
{
	float b;
	cout<<endl<<"enter second number : ";
		if(cin>>b)	
	cout<<a+b<<endl;
	  else 
	   cout<<"not valid entry!";
}
////////////
void mul(float a)
{
	float b;
	cout<<"\nenter second number : ";
	
	if(cin>>b)
	cout<<a*b<<endl;
	else
	 cout<<"not valid entry!";
}
//////////
void div(float a)
{
	float b;
	cout<<"\nenter second number : ";
		if(cin>>b)
		  if(b!=0)
        	cout<<a/b<<endl;
	else
	 cout<<"not valid entry!";
}

///////////////////

