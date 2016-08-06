#include "Coordinate.h"
#include "MyStack.h"
#include "Coordinate.cpp"
#include <iostream>

using namespace std;
MyStack::MyStack(int size){
	m_iSize = size;
	m_pBuffer = new Coordinate[size];
	m_iTop = 0;
} 

MyStack::~MyStack(){
	delete []m_pBuffer;
}

bool MyStack::stackEmpty(){
	if(0==m_iTop){
		return true;
	}else{
		return false;
	}
}

bool MyStack::stackFull(){
	if(m_iTop==m_iSize){
		return true;
	}else{
		return false;
	}
}

void MyStack::clearStack(){
	m_iTop = 0;
}

int MyStack::stackLength(){
	return m_iTop;
}

bool MyStack::push(Coordinate elem){
	if(stackFull()){
		return false;	
	}
	m_pBuffer[m_iTop] = elem;
	m_iTop++;
	return true;
}

bool MyStack::pop(Coordinate &elem){
	if(stackEmpty()){
		return false;
	}
	m_iTop--;
	elem = m_pBuffer[m_iTop];
	return true;
}	

void MyStack::stackTraverse(bool isFormButtom){
	if(isFormButtom){
		for(int i = 0; i < m_iTop;i++){
			//cout<<m_pBuffer[i]<<",";
			m_pBuffer[i].printCoordinate();
		}
	}else{
		for(int i = m_iTop-1; i >= 0;i--){
			//cout<<m_pBuffer[i]<<",";
			m_pBuffer[i].printCoordinate();
		}
	}
}

int main(void){
	MyStack *pStack = new MyStack(5);
	
	pStack->push(Coordinate(1,2));
	pStack->push(Coordinate(3,4));

 	pStack->stackTraverse(true);
 
 	
 
 	//pStack->clearStack();
	
	pStack->stackTraverse(false);
	
	cout<<pStack->stackLength()<<endl;
	
	if(pStack->stackEmpty()){
		cout<<"ջΪ��"<<endl;
	}
	
	if(pStack->stackFull()){
		cout<<"ջΪ��"<<endl;
	}
	
	delete pStack;
	pStack = NULL;
	
	system("pause");
	return 0;
}