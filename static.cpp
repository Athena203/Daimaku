#include<iostream>
using namespace std;
class Smallcat{
	public:
		Smallcat(double w);//�������캯��
		static void display(Smallcat & w);//��̬��Ա���� 
		static void totaldisp(); //��̬��Ա����
	private:
	    double weight;//���ݳ�Ա����ʾһֻСè�������
		static double totalweight;//��̬���ݳ�Ա���ۼ�Сè������
		static double totalnumber;//��̬���ݳ�Ա���ۼ�Сè��ֻ��
		 
}; 
Smallcat::Smallcat(double w)//���幹�캯�� 
{
	weight = w;
	totalweight+=w;//�ۼ�Сè������ 
	totalnumber++;//�ۼ�Сè��ֻ�� 
}
void Smallcat::display(Smallcat & w)//���徲̬��Ա����������������ã���Ϊ������ʾÿֻСè������ 
{
    cin>>"Сè��������">>w1>>endl; 
	cout<<"��ֻСè�������ǣ�"<<w.weight<<"ǧ��\n";
	 
} 
void Smallcat::totaldisp()//���徲̬��Ա��������ʾ����Сè��ֻ����������
{
cout<<totalnumber<<"ֻСè���������ǣ�"; 
cout<<totalweight<<"ǧ��"<<endl; 
 } 
 double Smallcat::totalweight=0;
 double Smallcat::totalnumber=0;//��̬���ݳ�Ա��ʼ�� 
 int main()
 {
 	
 	Smallcat w1(5),w2(6),w3(4);
 	Smallcat::display(w1);//���þ�̬��Ա��������ʾСè������ 
 	Smallcat::display(w2);
 	Smallcat::display(w3);
 	Smallcat::totaldisp();
 	return 0;
 }
