// ConsoleApplication22.cpp : �w�q�D���x���ε{�����i�J�I�C
//

//�ӤH��U�o�{����stack�L�k��{���D
//�[��즹�D�A�X�B��stack��LIFO�S�ʡA��w�Ƥ���U��fish�������j�p(�Hupstream or downstream���i)��Jstack���C
//���R�X���P���p���O�B�z�C�p�W�h�����A�H���q�N��Ҧ����p��sample�Ӱ����R 

#include "stdafx.h"
#include <stack>
#include <vector>
#include <iostream>

using namespace std;

//�t��k�[��L�H����A�ۤv��g���A�����c�S���t��+�ثe�٦���
//int solution(vector<int> &A, vector<int> &B)
//{
//	int i = 0, upstream_alive = 0;
//	stack<int> downstream_alive; //��l����
//
//	while ((unsigned)i < A.size())
//	{
//		while (downstream_alive.empty())
//		{
//			while (B[i] == 0 && (unsigned)i < A.size())
//			{
//				upstream_alive++;
//				i++;
//			}
//			break;
//		}
//
//		while (B[i] != 0 && (unsigned)i < A.size())
//		{
//			downstream_alive.push(A[i]);
//			i++;
//		}
//
//		while (!downstream_alive.empty() && B[i] == 0 && (unsigned)i < A.size())
//		{
//			while (A[i]>downstream_alive.top() && !downstream_alive.empty())
//				downstream_alive.pop();
//			if (downstream_alive.empty())upstream_alive++;
//			i++;
//		}
//	}
//	return (unsigned)upstream_alive + downstream_alive.size();
//}

//�L�H�g�A���c�ܦ��t�ΡA�e�����Bdebug!!�r
int solution(vector<int> &A, vector<int> &B) 
{
	stack<int> downstream_alive;
	int upstream_alive = 0;

	for (int i = 0; i < B.size(); ++i)
	{
		if (B[i] == 1) downstream_alive.push(i);
		else
		{
			while (!downstream_alive.empty())
			{
				if (downstream_alive.top() > A[i]) break;
				else downstream_alive.pop();
			}
			if (downstream_alive.empty()) upstream_alive++;
		}
	}
	return 	upstream_alive + downstream_alive.size();;
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> A{ 4, 3, 2, 1, 5 };
	vector<int> B{ 0, 1, 0, 0, 0 };

	cout << solution(A, B) << endl;

	return 0;
}

