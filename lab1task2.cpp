#include<iostream>            //filing
#include<fstream>
using namespace std;

int main(int argc,char**argv){
    ifstream obj1; //reading
	obj1.open(argv[1],ios::in); 
	ofstream obj2;  //writing
	obj2.open(argv[2], ios::out);
	string ch;     
	while(getline(obj1,ch)){
		obj2<<ch;
		cout<<"COPIED SUCCESFULLY" ;    
	}
	obj1.close();
	obj2.close();
}
