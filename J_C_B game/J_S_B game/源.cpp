#include <iostream>
using namespace std;
int main()
{
	int times, i, max_a=0,max_b=0;
	char *a, *b;
	char c[3] = { 'B','C','J' }; //������ĸ������
	//result_a[0]�����Ӯ�Ĵ�����result_a[1]�����ƽ�ֵĴ�����result_a[2]�������Ĵ���
	//result_b[0]������Ӯ�Ĵ�����result_b[1]������ƽ�ֵĴ�����result_b[2]��������Ĵ���
	int result_a[3] = {0,0,0}, result_b[3] = { 0,0,0 };
	//count_a[0]����׳���Ӯ�Ĵ�����count_a[1]����׳�����Ӯ�Ĵ�����count_a[2]����׳�����Ӯ�Ĵ���
	//count_b[0]�����ҳ���Ӯ�Ĵ�����count_b[1]�����ҳ�����Ӯ�Ĵ�����count_b[2]�����ҳ�����Ӯ�Ĵ���
	int count_a[3] = { 0,0,0 }, count_b[3] = { 0,0,0 };
	cin >> times;
	a = new char[times]; 
	b = new char[times];
	for (i = 0; i < times; i++)
	{
		cin >> a[i]>>b[i];
		//if( (a[i] == 'C'&&b[i] == 'J')|| (a[i] == 'J'&&b[i] == 'B')|| (a[i] == 'B'&&b[i] == 'C'))
		//	result_a[0]++;
		//if ((a[i] == 'C'&&b[i] == 'C')|| (a[i] == 'J'&&b[i] == 'J')|| (a[i] == 'B'&&b[i] == 'B'))
		//	result_a[1]++;
		//if ((a[i] == 'C'&&b[i] == 'B')|| (a[i] == 'J'&&b[i] == 'C')|| (a[i] == 'B'&&b[i] == 'J'))
		//	result_a[2]++;
		if (a[i] == 'J')
		{ 
			if (b[i]=='J')
			{
				result_a[1]++;
			}
			if (b[i] == 'C')
			{
				result_a[2]++;
				count_b[1]++;
			}
			if (b[i] == 'B')
			{
				result_a[0]++;
				count_a[2]++;
			}

		}
		if (a[i] == 'C')
		{
			if (b[i] == 'J')
			{
				result_a[0]++;
				count_a[1]++;
			}
			if (b[i] == 'C')
			{
				result_a[1]++;
			}
			if (b[i] == 'B')
			{
				result_a[2]++;
				count_b[0]++;
			}

		}
		if (a[i] == 'B')
		{
			if (b[i] == 'J')
			{
				result_a[2]++;
				count_b[2]++;
			}
			if (b[i] == 'C')
			{
				result_a[0]++;
				count_a[0]++;
			}
			if (b[i] == 'B')
			{
				result_a[1]++;
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		cout << result_a[i];
		if (i % 3 != 2)
			cout << " ";
	}
	cout << endl;

	for (i = 0; i < 3; i++)
	{
		result_b[i] = result_a[2-i];
		cout << result_b[i];
		if (i % 3 != 2)
			cout << " ";
	}
	cout << endl;
	for (i = 0; i < 3; i++)
	{
			if (count_a[i] > count_a[max_a])
				max_a = i;
			if (count_b[i] > count_b[max_b])
				max_b = i;
	}
	cout << c[max_a] <<" "<< c[max_b];
	return 0;
}