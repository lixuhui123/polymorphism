//#include <iostream>
//using namespace std;
//class Person {
//public:
//	virtual void BuyTicket() 
//	{ cout << "买票-全价" << endl; }
//};
//class Student : public Person {
//public:
//	virtual void BuyTicket() 
//	{ cout << "买票-半价" << endl; }
//
//	/*注意：在重写基类虚函数时，派生类的虚函数在不加virtual关键字时，虽然也可以构成重写(因为继承后
//	基类的虚函数被继承下来了在派生类依旧保持虚函数属性),但是该种写法不是很规范，不建议这样使用*/
//	/*void BuyTicket() { cout << "买票-半价" << endl; }*/
//};
//void Func(Person & p)
//{
//	/* 函数的参数里面有将子类转换成父类的隐式类型转换 ，并且在语法上是行的通的*/
//	p.BuyTicket();
//}
//int mainrgseAwffe()
//{
//	Person ps;
//	Student st;
//	 
//	
//	//st.BuyTicket();
//	Person *tmp = &st;
//	tmp->BuyTicket();
//
//	 
//
//
//
//    //ps.BuyTicket();
//	//Func(ps);
//	/*虽然参数是派生对象，但是派生类对基类进行了重写，
//	在基类的虚表中，维护了重载以后的虚函数，当派生类
//	被转换成基类时调用被重载后的函数。*/
//	//Func(st);
//	system("pause");
//	return 0;
//}