#include<iostream>
#include<fstream>
using namespace std;

int a,b,c ,cast_vote, show_votes, no_of_votes, leading_candidate, details, tlp_votes=0, pmln_votes=0, pti_votes=0, ppp_votes=0, total_votes;
	string name, f_name, cnic[50], mobile_no; 
    int age ;
    
struct voting{
	int i=0 , x=0;
	
	void intro(){
	cout<<"\n\t*********************************************";
	cout<<"\n\t**             Project name:               **";
	cout<<"\n\t**         Online Voting System            **";
	cout<<"\n\t**                                         **";
	cout<<"\n\t**             Alisha Naveed               **";
	cout<<"\n\t**                                         **";
	cout<<"\n\t*********************************************\n";
	}
	
    void info(){
    	ifstream myfile;
	    myfile.open("abc.txt", ios::app);
    	again:
		cout<<"\n\t\t\t Enter your First Name= ";
		cin>>name;
		cout<<"\t\t\t Enter your Father name(First name)= ";
		cin>>f_name;
		cout<<"\t\t\t Enter Your CNIC(13 digits wtih out dashes)= ";
		cin>>cnic[i]; 
		if(cnic[i].length()==13) // true , true 
		{ 
			for(x=0;i>x;x++)  // false , true
			{
			 if(cnic[i]==cnic[x])
			 {
			    cout<<"\n!!!!!!!!!!You have already voted.!!!!!!!!!!!"<<endl;
			    cout<<">>>Enter info again<<<";
			    goto again;
			 }
		    }
			i+=2; // i=2  ,, x=0
		        cout<<"\t\t\t Enter your Mobile Number= ";
		        cin>>mobile_no;
		        if(mobile_no.length()==11)
		        {
		            cout<<"\t\t\t Enter your Age= ";
		            cin>>age;
		            if(age>=18)
		            {
		                cout<<"\n\t\t\t1 TLP";
		                cout<<"\n\t\t\t2 PTI";
		                cout<<"\n\t\t\t3 PMLN";
		                cout<<"\n\t\t\t4 PPP";
		                cout<<"\n\t\t\tEnter your choice(1-4)= ";
		                cin>>b;
		               if(b==1)
		                {  
					        cout<<"\n\t\t\t You Vote TLP.";
					        tlp_votes=tlp_votes+1;
		                }
		                else if(b==2)
		                {
		                    cout<<"\n\t\t\t You Vote PTI";
		                    pti_votes=pti_votes+1;
		                }
		                else if(b==3)
		                {
					        cout<<"\n\t\t\t You Vote PMLN ";
		                    pmln_votes=pmln_votes+1;
					    }
		                else if(b==4)
		                {
					        cout<<"\n\t\t\t You Vote PPP";
		                    ppp_votes=ppp_votes+1;
					   }
		               else
		               {
					      cout<<"\n\t\t\t You Waste the Vote";
				       }  
	                }
	                else
	                {
	    	            cout<<"\n Your are Under age.";
		            }
		        }
		        else
		        {
		    	    cout<<"\n!!!!!!!!!!Wrong Mobile Number.!!!!!!!!!!!";
			    }
	    }
	    else
	        cout<<"\n!!!!!!!!!!!!Invalid CNIC.!!!!!!!!!!";
	    myfile.close();    
	}


	
	void show_votes(){
		int total_votes;
		total_votes = tlp_votes+pti_votes+pmln_votes+ppp_votes;
    	cout<<"\n Total Votes="<<total_votes;
	}
	
	void total_votes(){
		cout<<"\n\t\t\t1 TLP";
	    cout<<"\n\t\t\t2 PTI";
		cout<<"\n\t\t\t3 PMLN";
		cout<<"\n\t\t\t4 PPP";
		cout<<"\n Enter your choice(1-4)= ";
		cin>>c;
		if(c==1)
		   cout<<"\n TLP votes= "<<tlp_votes;
		else if(c==2)
		   cout<<"\n PTI Votes= "<<pti_votes;
		else if(c==3)
		   cout<<"\n PMLN Votes= "<<pmln_votes;
		else if(c==4)
		   cout<<"\n PPP Votes= "<<ppp_votes;
		else
		   cout<<"!!!!!!! Invalid Choice.!!!!!!!!";
	}
	
	void winner(){
		cout<<"\n***********************************************************";
		cout<<"\n**         Hafiz Saad Hussain Rizvi (TLP)                **";
		cout<<"\n**         Imran Khan(PTI)                               **";
		cout<<"\n**         Mian Muhammad Shehbaz Sharif(PMLN)            **";
		cout<<"\n**         Asif Ali Zardari(PPP)                         **";
		cout<<"\n************************************************************";
		if(tlp_votes>pti_votes&&tlp_votes>pmln_votes&&tlp_votes>ppp_votes)
		   cout<<"\n\t           Winner is TLP          ";
		else if(pti_votes>tlp_votes&&pti_votes>pmln_votes&&pti_votes>ppp_votes) 
		   cout<<"\n\t----------Winner is PTI----------";
		else if(pmln_votes>pti_votes&&pmln_votes>tlp_votes&&pmln_votes>ppp_votes)
		   cout<<"\n\t----------Winner is PMLN----------";
		else if(ppp_votes>pti_votes&&ppp_votes>pmln_votes&&ppp_votes>tlp_votes)
		   cout<<"\n\t----------Winner is PPP----------";
		else
		   cout<<"\n\t--------Parties Votes are Equal--------";   	                         
	}
	
	void show_info(){
		for(int i=0 ; i<=100 ; i++){
		cout<<"\n Name:"<<name;
		cout<<"\n Father Name:"<<f_name;
		cout<<"\n CNIC:"<<*cnic;
		cout<<"\n Mobile no:"<<mobile_no;
		cout<<"\n AGE:"<<age;
		break;
	}
	}
};
int main()
{
	voting V;
	V.intro();
	system("pause");
	system("cls");
	welcome:
	cout<<"Welcome to Voting System.";
	do{
    start:
	cout<<"\n";
	cout<<"\n1-Cast Vote ";
	cout<<"\n2-Show Votes ";
	cout<<"\n3-No. of Votes ";
	cout<<"\n4-Leading Candidates and Winning Party.";
	cout<<"\n5-Details ";
	cout<<"\n6-Clear Screen ";
	cout<<"\n Press 0 to exit";
	cout<<"\n Enter your Choice(0-6) ";
	cin>>a;
	switch(a){
		case 1:
		V.info();
		goto start;
		break;
		case 2:
		V.show_votes();
		goto start;
		break;
		case 3:
		V.total_votes();
		goto start;
		break;
		case 4:
		V.winner();
		goto start;
		break;
		case 5:
		V.show_info();
		goto start;
		break;
		case 6:
		system("cls");
		goto welcome;
		goto start;
		break;
	}
  }while(a!=0);

  return 0;
}
