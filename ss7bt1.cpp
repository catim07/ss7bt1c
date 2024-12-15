#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int count,n=10,i;
	printf("nhung phan tu la: \n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
		count+=1;
	}
	printf("co tat ca %d phan tu trong mang",count);
	return 0;
}
