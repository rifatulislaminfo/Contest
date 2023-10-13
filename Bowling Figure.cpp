#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t,p=0,x=0;
    cin>>t;

    while(t--){
    	string s,h;
    	cin>>s;
    	int u=s.size();
    	int b=u/6;
    	int c=u%6;
    	

    	for(int i=0;i<u;i++){
    		if(s[i]!='W'){
    			h=s[i];
    		int a=stoi(h);
    		p+=a;

    	}
    	else{
    		x++;
    	}
    	}
    	if(u<=6){


    	cout<<b<<'.'<<c<<" Over ";
    	b=0;
    	c=0;
    
    }
    if(u>6){
    	cout<<b<<'.'<<c<<" Overs ";
    	b=0;
    	c=0;
    }
    if(p<=1){
    	cout<<p<<" Run ";
    	p=0;
    }
     if(p>1){
    	cout<<p<<" Runs ";
    	p=0;
    }
    if(x<=1){
    	cout<<x<<" Wicket."<<endl;
    	x=0;
    }
    
   
     if(x>1){
    	cout<<x<<" Wickets."<<endl;
    	x=0;
    }

   

    	
    }
    
	return 0;
}	
