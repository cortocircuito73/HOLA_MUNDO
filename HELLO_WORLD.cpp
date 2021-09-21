//HOLA MUNDO

#include <iostream>

using namespace std;

int main(){
	string titulo="HOLA MUNDO";
	int pos=titulo.length();
	
	pos+=10;
	cout<<endl;
	
	for(int i=0; i<=pos; i++){
		cout<<" ";
		if(i==7){
			cout<<titulo;
			i=pos;
		}
		cout<<" ";
	}
	return 0;
}

