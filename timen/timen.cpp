#include <iostream>;
#include <cmath>
#include <vector>

using namespace std;

int main() {
	vector<double> nans;
	vector<double> rootnans;
	vector<double> n2ans;
	vector<double> n3ans;
	vector<double> nin2ans;
	vector<double> lgnans;
	vector<double> nlgnans;
	vector<double> ninnans;
	vector<double> bignans;
	double time[] = { 1, 60, 3600, 86400, 2628000, 31536000, 3153600000 };
	double sec = pow(10, 6);
	//nans
	std::cout << "f(n) = n: ";
	for (auto i : time) {
		nans.push_back(sec * i);
	}
	for (auto i : nans) std::cout << i << "  ";
	std::cout << endl;
	//rootnans
	std::cout << "f(n) = sqrt(n): ";
	for (auto i : time) {
		rootnans.push_back(pow(sec * i, 2));
	}
	for (auto i : rootnans) std::cout << i << "  ";
	std::cout << endl;
	//n2ans
	std::cout << "f(n) = n^2: ";
	for (auto i : time) {
		n2ans.push_back(pow(sec * i, 0.5));
	}
	for (auto i : n2ans) std::cout << i << "  ";
	std::cout << endl;
	//n3ans
	std::cout << "f(n) = n^3: ";
	for (auto i : time) {
		n3ans.push_back(pow(sec * i, 1.0 / 3.0));
	}
	for (auto i : n3ans) std::cout << i << "  ";
	std::cout << endl;
	//nin2ans
	std::cout << "f(n) = 2^n: ";
	for (auto i : time) {
		nin2ans.push_back(std::log(sec * i) / std::log(2.0));
	}
	for (auto i : nin2ans) std::cout << i << "  ";
	std::cout << endl;
	//lgnans
	std::cout << "f(n) = lg(n): ";
	for (auto i : time) {
		lgnans.push_back(pow(sec * i, 10.0));
	}
	for (auto i : lgnans) std::cout << i << "  ";
	std::cout << endl;
	//nlgnans
	/*std::cout << "f(n) = n*lg(n): ";
	for (auto i : time) {
		double n = i * sec;
		while (n * log10(n) > i * sec) n--;
		nlgnans.push_back(n);
		std::cout << nlgnans.back() << "  ";
	}
	std::cout << endl;*/
	//nin
	std::cout << "f(n) = n^n: ";
	for (auto i : time) {
		double n = i * sec;
		while (pow(n, n) > i * sec) n--;
		ninnans.push_back(n);
		std::cout << ninnans.back() << "  ";
	}
	std::cout << endl;
	//bignans

}