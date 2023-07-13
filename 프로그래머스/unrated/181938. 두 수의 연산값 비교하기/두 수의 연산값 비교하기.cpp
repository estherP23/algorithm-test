#include <string>
#include <vector>

using namespace std;
int connect (int a, int b) {
    int temp = b;
    while ( temp > 0 ) {
        a *= 10;
        temp /= 10;
    }
    return a+b;
}
int solution(int a, int b) {
    int plus = connect(a,b);
    int multi = 2*a*b;
    
  
    if (plus >= multi) return plus;
        else  return multi;
}