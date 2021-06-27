#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
	queue<int> fila;
	for(int i=0;i<10;i++){
		fila.push(i);
		cout << fila.back()<< endl;
	}
	cout<<"\nInprimindo o primeiro da fila\n";
	cout << fila.front() << endl;
	cout<<"\n";
    fila.pop();
    cout<<"\nImprimindo o novo primeiro da fila\n";
	cout << fila.front() << endl;
	cout<<"\n";

	for(int i=0;i<9;i++){
		fila.pop();
		cout << fila.front() << endl;
		cout<<"\n";
		if(fila.empty()){
			setlocale(LC_ALL, "Portuguese");
			cout << "Vazio na iteração " << i+1 << endl;
		}
	}
}
