// 乘法口诀表.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int result = 0;
	int mis = 0;
	int iMis[82];
	int jMis[82];
	time_t start, stop;
	start = time(NULL);
	for (int i = 1; i < 10 ; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i > j)
			{
				cout << j << "×" << i << "=" << i * j << endl;
			}
			else
			{
				cout << i << "×" << j << "=" << i * j << endl;
			}
			/*cin >> result;*/
			if (result != (i * j)||result == 99)
			{
				mis += 1;
				iMis[mis] = i;
				jMis[mis] = j;
			}
			/*while (result != i * j)
			{
				if(result==99)
				{
				    break;
				}
				if (i > j)
				{
					cout << j << "×" << i << "=";
				}
				else
				{
					cout << i << "×" << j << "=";
				}
				cin >> result;
			}*/
		}
		cout << "***************************************************"<<endl;
	}
	stop = time(NULL);
	cout << "错误次数：" << mis << endl;
	cout << "花费时间：" << stop - start << "秒" << endl;
	cout << "错误列表：" << endl;
	for (int i = 1; i < mis + 1; i++)
	{
		cout << iMis[i] << "×" << jMis[i] << "=" << iMis[i] * jMis[i]<<"\t";
	}
    return 0;
}

