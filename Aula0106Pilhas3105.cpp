#include <stack>
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
    stack<int> pilha;
    
    cout<<"Empilhando os valores igual pilha de pratos"<<endl;
    for(int i=0;i<10;i++){
        pilha.push(i);
		cout << pilha.top() << endl;
    }
    
	cout<<"\nRetirando um valor do topo da pilha" <<endl;
    cout << pilha.top() << endl;
    
    
    pilha.pop();
    cout<<"" <<endl;
	
	cout<<"\nImprimindo o novo topo da pilha " <<endl;
    cout << pilha.top() << endl;
    
    cout<<"" <<endl;
    
    for(int i=0;i<9;i++){
        pilha.pop();
        // cout << pilha.top() << endl;
       if(pilha.empty()){
           cout << "Fiquei vazia na iteração: " << i+1 << endl;
       }
    
   }
  
   
   
   }

