//#include <iostream>
//using namespace std;
//class Person {
//public:
//	virtual void BuyTicket() 
//	{ cout << "��Ʊ-ȫ��" << endl; }
//};
//class Student : public Person {
//public:
//	virtual void BuyTicket() 
//	{ cout << "��Ʊ-���" << endl; }
//
//	/*ע�⣺����д�����麯��ʱ����������麯���ڲ���virtual�ؼ���ʱ����ȻҲ���Թ�����д(��Ϊ�̳к�
//	������麯�����̳������������������ɱ����麯������),���Ǹ���д�����Ǻܹ淶������������ʹ��*/
//	/*void BuyTicket() { cout << "��Ʊ-���" << endl; }*/
//};
//void Func(Person & p)
//{
//	/* �����Ĳ��������н�����ת���ɸ������ʽ����ת�� ���������﷨�����е�ͨ��*/
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
//	/*��Ȼ�������������󣬵���������Ի����������д��
//	�ڻ��������У�ά���������Ժ���麯������������
//	��ת���ɻ���ʱ���ñ����غ�ĺ�����*/
//	//Func(st);
//	system("pause");
//	return 0;
//}