#include "Coordinate.h"
#include "MyStack.h"
#include "Coordinate.cpp"
#include <iostream>

#define BINARY 2
#define OCTONARY 8
#define HEXADECIML 16

using namespace std;

int main(void){
	
	
	MyStack<char> *pStack = new MyStack<char>(30);
	
	MyStack<char> *pNeedStack = new MyStack<char>(30);
	
	char str[] = "[()]]";
	
	char currentNeed = 0;
	
	for(int i = 0; i < strlen(str);i++){
		if(str[i]!=currentNeed){
			pStack->push(str[i]);
			switch(str[i]){
				case '[':
				if(currentNeed!=0){
					pNeedStack->push(currentNeed);
				}
				currentNeed = ']';
				break;
				case '(':
				if(currentNeed!=0){
					pNeedStack->push(currentNeed);
				}
				currentNeed = ')';
				break;
				
				default:
				cout<<"×Ö·û´®²»Æ¥Åä"<<endl;
				return 0;
			}
		}else{
			char elem;
			pStack->pop(elem);
			if(!pNeedStack->pop(currentNeed)){
				currentNeed = 0;
			}
		}
	}
	
	if(pStack->stackEmpty()){
		cout<<"×Ö·û´®Æ¥Åä"<<endl;
	}else{
		cout<<"×Ö·û´®²»Æ¥Åä"<<endl;
	}
	
	delete pStack;
	pStack = NULL;
	
	delete pNeedStack;
	pNeedStack = NULL;
	/*ÊýÖÆ×ª»» 
char num[] = "0123456789ABCDEF";
	
	MyStack<int> *pStack = new MyStack<int>(30);
	
	int N = 2016;
	
	int mod = 0;
	
	while(N != 0){
		mod = N % OCTONARY;
		pStack->push(mod);
		N/=OCTONARY;
	}
	
	//pStack->stackTraverse(false);
	int elem = 0;
	while(!pStack->stackEmpty()){
		pStack->pop(elem);
		cout<<num[elem];
	}
	delete pStack;
	pStack = NULL;
*/	
/*
	MyStack<char> *pStack = new MyStack<char>(5);
	
	pStack->push('h');
	pStack->push('l');

 	pStack->stackTraverse(true);
  
 	
 
 	//pStack->clearStack();
	
	pStack->stackTraverse(false);
	
	cout<<pStack->stackLength()<<endl;
	
	if(pStack->stackEmpty()){
		cout<<"Õ»Îª¿Õ"<<endl;
	}
	
	if(pStack->stackFull()){
		cout<<"Õ»ÎªÂú"<<endl;
	}
	
	delete pStack;
	pStack = NULL;
*/	
	system("pause");
	return 0;
}