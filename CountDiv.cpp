// ConsoleApplication19.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A, int B, int K) {
	// write your code in C99


	/*int i, count = 0;		(���g�k�ɶ������פ��X��)
	for (i = A; i <= B; i++){
	if (i % K == 0)
	count++;
	}
	return count;*/


	//���[����C�|�ӧ�X�W�h�A�i�ӳ]�p�į��Ϊ��t��k
	/*int difference = B - A, CountDiv;		(���g�k��ӵo�{�W�h���c���A�Ӫ�ɶ��B�믫�B�e���g���B���ndebug�A�̫��٬O�g�����T�A�G!��ĳ�H�����t��k�Q����A�U��A�קK���O�ɶ��C)

	if (K % 2 == 0){
	if (difference % K == 1)
	CountDiv = (difference + 1) / K;
	else if (difference % K == 0){
	if (A % K == 1)CountDiv = difference / K;
	else if (A % K == 0)CountDiv = difference / K + 1;
	}
	else if (K % 2 == 1) {
	if (difference % K == 0){
	if (A%K == 0)CountDiv = difference / K + 1;
	else if (A%K == 1 || A%K == 2)CountDiv = difference / K;
	}
	else if (difference % K == 1){
	if (A%K == 1)CountDiv = (difference - 1) / K;
	else if (A%K == 0 || A%K == 2)CountDiv = ((difference - 1) / K) + 1;
	}
	else if (difference % K == 2)
	CountDiv = (difference + 1) / K;
	}
	}*/


	//if (A % K == 0) return (int)(B - A) / K + 1;	//(�g�T�u�į�S�n���t��k�A�r!It is completely a mathematic question. Not qualified for a 2-star problem.)
	//else return (int)(B - (A - A % K)) / K;


	return (B / K) - (A / K) + !(A % K); //(�����Ҭ�!)
}


int _tmain(int argc, _TCHAR* argv[])
{
	cout << solution(6, 11, 2) << endl; //6 8 10 =3
	return 0;
}

