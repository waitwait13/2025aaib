// week11-3a.cpp SOIT107_ADVANCE_001_C
#include <stdio.h>
int f(int a,int b){
	if(a<b) return -1;
	if(a==b) return 0;
	if(a>b) return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}

// week11-3b.cpp SOIT107_ADVANCE_009_C_C++
#include<iostream>
using namespace std;

int max_digit(int n){
	int ans = 0;
	while(n>0){
		if(n%10>ans) ans = n%10;
		n = n/10;
	}
	return ans;
}

int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* �W��C++ �� main ��� ������ �U�� C �� main ���
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
