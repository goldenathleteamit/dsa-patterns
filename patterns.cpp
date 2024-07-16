#include<iostream>
using namespace std;
int main(){
//	int n;
//	cin>>n;
//	
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			char ch='A'+n-i+j-1;
//			cout<<ch<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}

//Q1

//D
//C D
//B C D
//A B C D

//Q2

//A B C
//B C D
//C D E

//int n;
//cin>>n;
//
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n){
//		char ch='A'+i+j-2;
//		cout<<ch <<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//Q3 reverse L(_/) triangle
int n;
cin>>n;

int i=1;
while(i<=n){
	//space print 
	int space=n-i;
	while(space){
		cout<<" ";
		space--;
	}
	//stars print
	int j=1;
	while(j<=i){
		
		cout<< j;
		j++;
	}
	cout<<endl;
	i++;
}

//  Q4
//****
//***
//**
//*


//int n;
//cin>>n;
//
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n-i+1){
//		
//		cout<<'*';
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


}



