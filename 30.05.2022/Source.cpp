#include<iostream>
#include<string>
#include<xmemory>
#include<chrono>
#include<vector>
//using namespace std;
void foo(int *pf) {

}


int main() {
	int *p;
	//std::auto_ptr<int> p_auto;//���������
	//std::unique_ptr<int> p_uniq;//���������
	//std::shared_ptr<int> p_share;//���������
	//std::weak_ptr<int> p_weak;//�� ��������� 

	//std::vector<std::chrono::seconds> a;
	auto p_uniq_int = std::make_unique<int>(7);
	std::cout << "p_uniq_int = " << *p_uniq_int<<std::endl;
	//���������-����� ��������� ������� ����� ��������� ���� ����� ������������ ��������.
	std::vector<int>collection;
	collection.push_back(1);//��������� � �����
	collection.insert(collection.begin(), 2);
	for (auto &el : collection) {
		std::cout << el << " ";
	}
	std::cout << std::endl;

	for (std::vector<int>::iterator it = collection.begin();
		it != collection.end();
		++it){
		std::cout << *it << " ";
}
	std::cout << std::endl;









	int arr [3] = { 2,5,6 };
	for (auto arr : arr) {
		std::cout << arr << " ";
	}

	                                                                                                  




	system("pause>null");
	return 0;
}