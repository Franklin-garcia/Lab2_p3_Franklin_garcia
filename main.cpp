#include <iostream>
using namespace std;
int primos(int);
int multiplos(int,int,int);
int igualdad(int);
int p(int,int);
main(){
bool seguir =true;
while(seguir){
	 cout<<"Ingrese opcion 1,2,3"<<endl;
	int opcion;
	cin>>opcion;
	switch(opcion){
		case 1:{
			int numero;
			cout<<"Ingrese numero"<<endl;
			cin>>numero;
			cout<<"la suma es"<<primos(numero)<<endl;		
		}break;
		case 2:{	
			int a;
			int b;
			int n;
			cout<<"Ingrese a"<<endl;
			cin>>a;
			cout<<"Ingrese b"<<endl;
			cin>>b;
			cout<<"Ingrese n"<<endl;
			cin>>n;
			cout<<"La suma es:"<<multiplos(a,b,n)<<endl; 			
		}break;
		case 3:{
			int n;
			cout<<"Ingrese numero"<<endl;
			cin>>n;
			while(n>150){
				cout<<"Ingrese un numero menor a 150"<<endl;
				cin>>n;
				
			}
			cout<<"->"<<igualdad(n)<<endl;
			
		}break;
	}	
   }//fin del ciclo
return 0;
}//fin del main  

int primos(int a){
	int acum=0;
	int cont=0;
	for(int i=1;i<=a;i++){
		cont=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cont++;		
			}
		
		}
		if(cont==2){
     	 		acum+=i;
		}	
	
	}
	
return acum+1;
}//fin

int multiplos(int a, int b, int n){
int acum=0;
	for(int i=1;i<=n;i++){	
		if(i%a==0 || i%b==0){
			acum+=i;
		}
	}
	
return acum;
}

int igualdad (int n){
	int cont=0;
	int num1=0;
	int num2=0;
	for(int i=0;i<=n;i++){
		if(p(i,n)==1){
			num1=i;
			if(p(i,n)==1){	
				num2=n-num1;
				cout<<"Los numeros ingresados seran"<<num1<<"y" 					<<num2<<endl;
			}
		
		}		
	}
return 0;
}

int p(int i,int n){
	int cont=0;
	for(int j=1;j<=i;j++){
		if(i%j==0){
			cont++;
		}
	}
	if(cont==2){
		return 1;
	}else{
		return 2;
	}
}

