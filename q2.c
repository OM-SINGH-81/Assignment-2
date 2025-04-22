# include <stdio.h>
# include "my_library.h"
// Bubble sort
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	for(int i=0;i<n;i++){
	   	printf("%d ",arr[i]);
	}
}

