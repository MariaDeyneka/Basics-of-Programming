#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void take(string* a, int &k, string text){
	ifstream out;
	out.open(text);
	string line;
	bool repeat, take;
	if(out.is_open()){
		while(getline(out,line)){
			repeat = false; take = false;
			for (int i = 0; i<k; i++){
				if(line==a[i]){
					a[i] = "";
					repeat = true;
				}
			}
			if (repeat){
			for (int i = 0; i<k; i++){
				if(a[i]==""){
					a[i] = line;
					take = true;
				}
			}
			}
			if( repeat && take){
				a[k++] = line;
			}
		}
	}
}

int main() {
	string* a = new string[20]; 
	string line;
	ifstream out;
	out.open("in1.txt");
	int k = 0;
	if(out.is_open()){
		while(getline(out,line)){
			a[k++] = line;
		}
	}
	out.close();
	string b[2] = {"in2.txt","in3.txt"};
	take(a,k,b[0]);
	take(a,k,b[1]);
	ofstream inr;
	inr.open("out.txt");
	for (int i = 0; i<k; i++){
		if(a[i] ==""){
			inr << a[i] << "\n";
		}
	}
	delete[] a;
}
