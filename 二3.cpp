/********************************************************************************************************************* 
                        ����һ��Boat��Car�����࣬���Ƕ�����˽������--������
                        ��дһ���������������ߵ������͡�
                        --------------------------------------------------
						programmer��Bi Qian
						Date:2014.11
***********************************************************************************************************************/ 

#include<iostream>
#include<cstdlib>
using namespace std;

class Car;//������Car 
class Boat
{
	friend double TotalWeight(Boat& b, Car& c);//������Ԫ���� TotalWeight
	
	public:
		Boat(double WEIGHT1)//Boat�Ĺ��캯�� 
		{
			weight1=WEIGHT1;
		}
		~Boat()
		{
		}
	
	private:
		double weight1;//˽������ 
};

class Car
{
	friend double TotalWeight(Boat& b, Car& c);//������Ԫ���� TotalWeight
	
	public:
		Car(double WEIGHT2)//Car�Ĺ��캯�� 
		{
			weight2=WEIGHT2;
		}
		~Car()
		{
		}
	
	private:
		double weight2;//˽������ 
};

double TotalWeight(Boat& b, Car& c)//��������֮�� 
{
	return b.weight1+c.weight2;
}

int main()
{
	double w1,w2,total;
	
	cout<<"�����봬��������";
	cin>>w1;
	
	cout<<"�����복��������" ;
	cin>>w2;
	
	Boat b(w1);
	Car c(w2);
	
	total=TotalWeight(b,c);//�����Ӻ�������������֮�� 
	
	cout<<"���ߵ�������Ϊ��"<<total<<endl;
	
	system("pause");
		 
	return 0; 
}




