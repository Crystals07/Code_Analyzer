#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s,test; cin>>test>>s;

	string util = "util_obj";

	string t_util = "test_util";

	string command = "g++ "+s+" -o "+util;              //util_obj

	string test_command = "g++ "+test+" -o "+t_util;   //test_util

	system(command.c_str());

	system(test_command.c_str());

	fstream myfile;

	ifstream rfile;

	myfile.open("Output.txt",ios::out);

	rfile.open("Output.txt");


	//system("./a.out < Input.txt");

	long long int r_limit = 1e9,l_limit = 0;

	int i = 0,flag = false,flag2 = false;

	std::vector<int> v(3,-1);

	int range[] = {0,14,32,34,38,100,402,(int)2e3,(int)1e4,(int)1e6,(int)1e6,(int)1e6};

	while(true)
	{
		

		//int mid = (l_limit+r_limit)/2;

		//if(i==10) break;

		string cmd = "./"+util+" "+to_string(l_limit);

		//cout<<"@ "<<cmd<<"\n";

		system(cmd.c_str());

		string testing = " ( timeout 2s ./"+t_util +" m < " + "Input.txt ";

		string cmd2 = testing+" > "+" Output.txt ) || echo -1 > Output.txt";

		//cout<<"cmd2 "<<cmd2<<"\n";

		system(cmd2.c_str());

		//if(l_limit==25) break;

		//std::this_thread::sleep_for (std::chrono::seconds(3));

		//string cmd3 = "if [ $? -eq 0 ]; then   echo $? ;else echo 2 > Output.txt ; fi";

		//system(cmd3.c_str());

		//cout<<"# "<<l_limit<<" "<<"\n";

		string t; //char ch;

		
		rfile.clear(); 

		rfile.seekg(0,std::ios::beg);
    
    	getline(rfile,t);

		int num = stoi(t);

		//cout<<"! "<<t<<" "<<num<<"\n";

		if(num == -1)
		{
			 break;
		}

		if(num>=1200)
		{
			//r_limit = mid-1;
			//l_limit = l_limit;
			//break
			//l_limit = raange[i]
		//	cout<<"breaking-bad\n";

			 break;

		}

		 if(num>=1000&&num<1200)
		{
			flag = true; 

		//	cout<<"flag "<<i<<" \n";

			  break; 
		}

		if(i>=10)
		{
			v[i-10] = num;
		}

		 if(num<1000)
		{
			//l_limit = mid+1;
			//r_limit = r_limit; 
			//l_limit++;
		//	cout<<" % "<<i<<"\n";

			if(i==12) 
			{
				flag2 = 1; break;
			}

			l_limit = range[++i];

		}
		
		//cout<<"& "<<l_limit<<" "<<"\n";
	}

	
	//cout<<" @ "<<i<<" \n";

	if(!flag&&!flag2&&i>1&&i<10) i -= 1;

	//if(i>1) i -= 1; 

	if(i>=10)
	{
		if(v[0]>0||v[1]>0||v[2]>0) i = 10;

		else
		{
			//v.clear();

			std::vector<int> temp(3,-1);

			system("echo 1e10 > Input.txt");


			string cmd4 = "./test_util n < Input.txt > Output.txt" ;

			for(int indx=0;indx<3;indx++)
			{
				system(cmd4.c_str());

				string new_str; //char ch;
		
				rfile.clear(); 

				rfile.seekg(0,std::ios::beg);

				getline(rfile,new_str);

				int no = stoi(new_str);

				//cout<<" $ "<<no<<" \n";

				temp[indx] = no;
			}

			//cout<<"@ jk "<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<"\n";

			i = (((temp[0]+temp[1]+temp[2])/3)<=200)? 12 : 11;

		}
	}

	myfile.close();

	rfile.close();


	string ans = "Time Complexity ~ ";

	switch(i)
	{
		case 0:
			ans += " Inf ";
			break;

		case  1:
			ans += " Exponential ";
			break;

		case  2:
			ans += "O(2^N*N^2)";
			break;

		case 3:
		 	ans += "O(2^N*N)";
		 	break;

		case  4:
			ans += " 0(2^N) ";
			break;


		case  5:
			ans += " O(N^4) ";
			break;
		

		case  6:
			ans += " O(N^3) ";
			break;
		
		case  7:
			ans += " O(N^2logN) ";
			break;
		
		case  8:
			ans += " O(N^2) ";
			break;
		
		case  9:
			ans += " O(NlogN) ";
			break;

		case  10:
			ans += " O(N) ";
			break;
		
		case 11:
			ans += " O(logN) ";
			break;

		case 12:
			ans += " O(1) ";
			break;
		
		// case i == 12:
		// 	ans += " Inf ";

		// case i == 13:
		// 	ans += " Inf ";
	
	}

	cout<<ans<<"\n";
}