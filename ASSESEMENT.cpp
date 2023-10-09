#include<iostream>
#include<string.h>
using namespace std;
class event{
	 public: 
	 void wedding()
	 {
	 	 
			 int total,min,num; 
			 float cfs,cff,average,totalcost,deposite;    // num=number of servers                                     //num=no.of servers and 
			char first[20],last[20];                      //cff=cost for food
		  char name[30];                        // cfs=cost for servers
	 	                                          //total=total no. of guests
		                      
	 	
		 
		 cout<<"\t\t\t*************** Event Managemant System ***************"<<endl<<endl;
		 
	 	cout<<"Enter the name of the event"<<endl;
	 	cin>>name;
	 	
	 	cout<<"Enter the customer's first and last name"<<endl;
	 	cin>>first>>last;
	 	strcat(first,last);
	 	
     cout<<"enter the number of guests"<<endl;
	 	cin>>total;
	 	cout<<"Enter the number of minutes in the event"<<endl;
	 	cin>>min;
	 	
	 	cout<<"===============Event estimate for :rakesh kharva ==============="<<endl;
	 	
	 	cout<<"Number of servers:"<<endl;
	 	cin>>num;
	 	cout<<"The cost for servers:"<<endl;
	 	cin>>cfs;
	 	cout<<"The cost for food is:"<<endl;
	 	cin>>cff;
	 	
	 	 
	 	 average=cff/total;
	 	 cout<<"Average cost per person :"<<average<<endl<<endl<<endl;
	 	
	 	totalcost=cff+(cfs*num);
	 	cout<<"Total cost is:"<<totalcost<<endl;
	 	
	 	cout<<"Please deposite a 25% deposite to reserve the event "<<endl;
	 	deposite=totalcost*.25;
	 	cout<<"The Deposite needed is:"<<deposite<<endl;
	 	
	 	
	 }
};
int main()
{
	event e1;
	e1.wedding();
}
