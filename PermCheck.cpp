int solutint solution(std::vector<int> &A)
{
	std::vector<bool> Value_flag(A.size());

	for (auto iterator = A.begin(); iterator<A.end(); ++iterator){
		if ((unsigned)*iterator>A.size() || Value_flag[*iterator] == true) //�p�Gelement value�W�X�̤j�e�\�ȩέ���
			return 0;
		Value_flag[*iterator] = true;
	}
	return 1;
}