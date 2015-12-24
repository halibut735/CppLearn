#include <iostream>
class Base1
{
public:
	virtual void vf1(){}	
	virtual void vf2(){}
	virtual void vf3(){}
	virtual void vf4(){}
	virtual void vf5(){}
	virtual void vf6(){}
	virtual void vf7(){}
	virtual void vf8(){}
	virtual void vf9(){}
	virtual void vf10(){}
};

class Base2
{
public:
	
	virtual void vg1(){}
	virtual void vg2(){}
	virtual void vg3(){}
	virtual void vg4(){}
	virtual void vg5(){}
	virtual void vg6(){}
	virtual void vg7(){}
	virtual void vg8(){}
	virtual void vg9(){}
	virtual void vg10(){}
};

class Sub : public Base1,public Base2
{
public:
    virtual void vf1(){}	
	virtual void vf2(){}
	virtual void vf3(){}
	virtual void vf4(){}
	virtual void vf5(){}
	virtual void vf6(){}
	virtual void vf7(){}
	virtual void vf8(){}
	virtual void vf9(){}
	virtual void vf10(){}
	
	virtual void vg1(){}
	virtual void vg2(){}
	virtual void vg3(){}
	virtual void vg4(){}
	virtual void vg5(){}
	virtual void vg6(){}
	virtual void vg7(){}
	virtual void vg8(){}
	virtual void vg9(){}
	virtual void vg10(){}
	
	virtual void vh1(){}
	virtual void vh2(){}
	virtual void vh3(){}
	virtual void vh4(){}
	virtual void vh5(){}
	virtual void vh6(){}
	virtual void vh7(){}
	virtual void vh8(){}
	virtual void vh9(){}
	virtual void vh10(){}
	
private:
    int a;
};


int main()
{
    Sub* s = new Sub();
    long **vtab = (long **)s;
    
    std::cout << "vtab = "<<vtab<<std::endl;

    std::cout << "vtab[0] = "<<vtab[0]<<std::endl;
    std::cout << "vtab[1] = "<<vtab[1]<<std::endl;
    std::cout << "vtab[2] = "<<vtab[2]<<std::endl;
    
    std::cout << "vtab[0][0] = "<<(void *)vtab[0][0]<<std::endl;
    std::cout << "vtab[0][1] = "<<(void *)vtab[0][1]<<std::endl;
    std::cout << "vtab[0][2] = "<<(void *)vtab[0][2]<<std::endl;
    std::cout << "vtab[0][10] = "<<(void *)vtab[0][10]<<std::endl;
    std::cout << "vtab[0][11] = "<<(void *)vtab[0][11]<<std::endl;
    std::cout << "vtab[0][12] = "<<(void *)vtab[0][12]<<std::endl;
    std::cout << "vtab[1][0] = "<<(void *)vtab[1][0]<<std::endl;
    std::cout << "vtab[1][1] = "<<(void *)vtab[1][1]<<std::endl;
    std::cout << "vtab[1][2] = "<<(void *)vtab[0][2]<<std::endl;
    
    s->vf2();
    s->vg4();
    s->vh6();
    return 0;
}
