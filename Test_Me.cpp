#include<bits/stdc++.h>
using namespace std;

#define ll long long int



ll max(ll x,ll y)
{
	return x>y;
}

int fib(int n)
{
	//if(n<=1) return n;

	return fib(n-1)+fib(n-2);
}


int main(int args_no,char ** args)
{

	 long long int n; cin>>n;

	
	  //Start measuring time

	if(*(args[1])=='m')
	{
		auto begin = std::chrono::high_resolution_clock::now();
		
		
		// paste your code here
		
		fib(n);
			

	    auto end = std::chrono::high_resolution_clock::now();

        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

        cout<<elapsed.count()<<setprecision(5)<<"\n";

	}

    else
    {
        auto begin = std::chrono::high_resolution_clock::now();

        
        // paste your code here

        fib(n);

  	    auto end = std::chrono::high_resolution_clock::now();
  
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);

        cout<<elapsed.count()<<setprecision(5)<<"\n";
	
    }	

    
	//end = clock();

	//double t = double(end-start)/double(CLOCKS_PER_SEC);
	
	//return t;	

	//cout<<"@ "<<fib(n)<<"\n";

	//cout<<t<<setprecision(5);
}