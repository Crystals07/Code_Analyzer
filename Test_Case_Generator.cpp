#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll r(ll l_limit,ll r_limit)
{	

	//if(l_limit>r_limit) return 1;

	srand(time(0));

	ll r_num = (rand()%(r_limit-l_limit+1));

	//cout<<r_num<<"\n";

	return r_num;
}


int main(int arg_no,char **args)
{
	ofstream newfile;

	newfile.open("Input.txt");

	srand(time(0));

	//int r_num = (rand()%(u_limit-l_limit+1) +l_limit);

	newfile<<args[1]<<endl;

	

	newfile.close();
}