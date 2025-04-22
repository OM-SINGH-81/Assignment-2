# include <stdio.h>
# include "my_library.h"
//Minimum element in array
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	printf("%d",minimum(arr,n));
	return 0;
}
