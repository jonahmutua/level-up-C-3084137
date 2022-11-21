#include <stdio.h>

int main()
{
	int n;
	static int count;

	printf("Enter Starting Number:\n");
	scanf("%d",&n);
	while(n>1){
		if(!(n%2)){
			//even
			n/=2;
		}else{
			n=(n*3)+1;
		}
		if(n!=1){
			printf("%d,",n);
		}else{
			printf("%d\n",n);

		}
		count++;
	}

	printf("Sequence Length:%d\n",count);
	return 0;
}