 #include <stdio.h>
 double fun(int n);
 int main(void){
 	int n;
 	printf("Enter n:");
 	scanf("%d",&n);
 	printf("%lf\n",fun(n));
 	return 0;
 }
 double fun(int n){
 	if(n == 0 || n == 1){
	 	return 1;
	 }else{
 		return n*fun(n-1);
 	}
 }