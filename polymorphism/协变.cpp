//#include <iostream>
//using namespace std;
///* ʲô����Э���أ�һ�����ĸ��࣬A B Person Student �࣬B�̳���A��Student�̳���
//Person   ��Person���麯������ֵΪA��ָ��������ã�Student�е�ͬ���麯������B���
//����ָ��������õ�ʱ�������๹����д*/
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
////		/* �Ȳ�������дҲ������Э�� */
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
//		/* �Ȳ�������дҲ������Э�� */
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