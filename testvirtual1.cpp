#include <iostream>
using namespace std;
class Base{
	int a;
public:
	virtual void fun1() {cout<<"Base::fun1()"<<endl;}
	virtual void fun2() {cout<<"Base::fun2()"<<endl;}
	virtual void fun3() {cout<<"Base::fun3()"<<endl;}
};
class A:public Base{
	int a;
public:
	void fun1() {cout<<"A::fun1()"<<endl;}
	void fun2() {cout<<"A::fun2()"<<endl;}
};

void* getp(void *p){
	return (void *)*(unsigned long *)p;
}

typedef void (*fun)();

fun getfun(Base *obj, unsigned long off){
	void *vptr = getp(obj);
	unsigned char *p = (unsigned char *)vptr;
	p += sizeof(void *) * off ;
	return (fun) getp(p);
} 

int main(){
	Base *p = new A;
	fun f = getfun(p,0);
	(*f)();
	f = getfun(p,1);
	(*f)();
	f = getfun(p,2);
	(*f)();
	p = NULL;
	return 0;	
}
