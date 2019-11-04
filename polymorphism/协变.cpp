//#include <iostream>
//using namespace std;
///* 什么叫做协变呢，一共有四个类，A B Person Student 类，B继承自A，Student继承自
//Person   当Person中虚函数返回值为A的指针或者引用，Student中的同名虚函数返回B类的
//对象指针或者引用的时候两个类构成重写*/
//class A 
//{};
//class B : public A
//{};
////class Person 
////{
////public:
////	virtual A* f()
////	{ return new A; }
////};
////class Student : public Person 
////{
////public:
////	virtual B* f() 
////	{
////		/* 既不构成重写也不构成协变 */
////		return new B; 
////	}
////};
//
//class Person
//{
//public:
//	virtual Person* f()
//	{
//		return new Person;
//	}
//};
//class Student : public Person
//{
//public:
//	virtual Student* f()
//	{
//		/* 既不构成重写也不构成协变 */
//		return new Student;
//	}
//};
//
//int main()
//{
//	A a;
//	B b;
//	Person p;
//	Student s;
//	p.f();
//	s.f();
//
//	system("pause"); 
//	return 0;
//}