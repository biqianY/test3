/********************************************************************************************************************* 
                        定义一个Boat和Car两个类，他们都具有私有属性--重量；
                        编写一个函数，计算两者的重量和。
                        --------------------------------------------------
						programmer：Bi Qian
						Date:2014.11
***********************************************************************************************************************/ 

#include<iostream>
#include<cstdlib>
using namespace std;

class Car;//声明类Car 
class Boat
{
	friend double TotalWeight(Boat& b, Car& c);//声明友元函数 TotalWeight
	
	public:
		Boat(double WEIGHT1)//Boat的构造函数 
		{
			weight1=WEIGHT1;
		}
		~Boat()
		{
		}
	
	private:
		double weight1;//私有属性 
};

class Car
{
	friend double TotalWeight(Boat& b, Car& c);//声明友元函数 TotalWeight
	
	public:
		Car(double WEIGHT2)//Car的构造函数 
		{
			weight2=WEIGHT2;
		}
		~Car()
		{
		}
	
	private:
		double weight2;//私有属性 
};

double TotalWeight(Boat& b, Car& c)//计算两者之和 
{
	return b.weight1+c.weight2;
}

int main()
{
	double w1,w2,total;
	
	cout<<"请输入船的重量：";
	cin>>w1;
	
	cout<<"请输入车的重量：" ;
	cin>>w2;
	
	Boat b(w1);
	Car c(w2);
	
	total=TotalWeight(b,c);//调用子函数，计算两者之和 
	
	cout<<"两者的重量和为："<<total<<endl;
	
	system("pause");
		 
	return 0; 
}




