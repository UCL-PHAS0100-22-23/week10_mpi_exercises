#include <iostream>

using namespace std;

int main() {
  int N = 1'000'000'000;
  double dx = 1.0f/(N-1);

  std::cout << N << std::endl;
  double sum = 0.;

  for(int i=0; i<N; ++i) {
    double x = i*dx;
    sum += 4.0f/(1.0f + x*x)*dx;
  }

  std::cout << "Result: " << sum << '\n';

  return 0;
}
