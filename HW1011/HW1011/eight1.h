#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(char * name)
	{
		strcpy_s(this->name, strlen(name)+1,name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(char * name, int money)
		: Employee(name), salary(money)
	{  }
	int GetPay() const
	{
		return salary;
	}
	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(char * name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{  }
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime*payPerHour;
	}
	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;    // 월 판매실적
	double bonusRatio;    // 상여금 비율 
public:
	SalesWorker(char * name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{  }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay()
			+ (int)(salesResult*bonusRatio);
	}
	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{

		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();

	}
	void ShowTotalSalary() const
	{
		int sum = 0;

		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();

		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

namespace RISK_LEVEL
{
	enum
	{
		RISK_A = 30, RISK_B = 20, RISK_C = 10
	};
}


class ForeignSalesWorker : public SalesWorker
{
private:
	const int riskDisposed;
	int SR;
public:
	ForeignSalesWorker(char* name, int money, double ratio, const int risk)
		:SalesWorker(name, money, ratio), riskDisposed(risk)
	{}

	int RiskyGetPay() const
	{
		return (int)(SalesWorker::GetPay()*riskDisposed / 100);
	}

	void AddSalesResult(int x)
	{
		SR = SalesWorker::GetPay()+RiskyGetPay();
	}

	virtual void ShowSalaryInfo() const
	{
		SalesWorker::ShowSalaryInfo();
		cout << "risk pay: " << RiskyGetPay() << endl;
		cout << "sum: " << SR << endl << endl;
	}

};




