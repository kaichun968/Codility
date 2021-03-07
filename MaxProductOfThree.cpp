//�t��k�����ۤv�Q��
//���ճq�L�٬O�n�ˬdcode�ΥΨ䥦�X�Ӽ˥�����,�H�K���S�Ҽ{�쪺,�S��cover�Ҧ����p
//��6�ر��p�^��

#include "stdafx.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> &A)
{
	int i, triplet_1 = 0, triplet_2 = 0;
	vector<int> natural_part;
	vector<int> negative_part;

	//���������M���t�ǦC:
	for (i = 0; (unsigned)i < A.size(); i++)
	{
		if (A[i] >= 0)natural_part.push_back(A[i]);
		else if (A[i] < 0)negative_part.push_back(A[i]);
	}

	//�Ƨǰ�:
	if (!natural_part.empty())
		sort(natural_part.begin(), natural_part.end());

	if (!negative_part.empty())
		sort(negative_part.begin(), negative_part.end());

	//��6�ر��p�^��:
	if (natural_part.size() == 0 && negative_part.size() >= 3)
		return *--negative_part.end()**----negative_part.end()**------negative_part.end();

	if (A.size() > 3)
	{
		if (natural_part.size() >= 3)
			triplet_1 = *--natural_part.end()**----natural_part.end()**------natural_part.end();

		if (natural_part.size() >= 1 && negative_part.size() >= 2)
			triplet_2 = *--natural_part.end()**negative_part.begin()**++negative_part.begin();
		
		return max(triplet_1, triplet_2);
	}

	if (natural_part.size() == 3)
		return natural_part[0] * natural_part[1] * natural_part[2];

	if (natural_part.size() == 1 && negative_part.size() == 2)
		return natural_part[0] * negative_part[0] * negative_part[1];

	if (natural_part.size() == 2 && negative_part.size() == 1)
		return natural_part[0] * natural_part[1] * negative_part[0];

	return 0;
}

//��L����g��,���u�n����ر��p�B�z:
//int solution(std::vector<int>& input)
//{
//	if (input.size() < 3) // 1
//		return 0;
//
//	std::sort(input.begin(), input.end()); // 2
//
//	int pos = input.back() * *(input.rbegin() + 1) * *(input.rbegin() + 2); // 3
//	int neg = input.front() * *(input.begin() + 1) * input.back(); // 4
//
//	return std::max(pos, neg); // 5
//}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> A{ -5, -6, -4, -7, -10 };
	cout << solution(A);
	return 0;
}