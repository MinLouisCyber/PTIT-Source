#include<stdio.h>
#include<math.h>
int is_prime(int n){
	if(n < 2)
	 return 0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n % i == 0)
		 return 0;
	}
	return 1;
}
bool is_circular_prime(int num) {
    int temp = num;
    int num_digits = 0;
    while (temp > 0) {
        num_digits++;
        temp /= 10;
    }
    temp = num;
    for (int i = 0; i < num_digits; i++) {
        if (!is_prime(temp)) return false;
        int last_digit = temp % 10;
        temp = temp / 10 + last_digit * pow(10, num_digits - 1);
    }
    return true;
}
int main()
{
  int dem=0;
  int n;
  scanf("%d", &n);
  for(int i=2; i<=n; i++)
  {
  	if(is_circular_prime(i))
  	 dem++;
	  }	
	  printf("%d", dem);
}