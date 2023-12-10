#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	int temp = *a;
    *a = *b;
    *b= temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        return binarySearch(arr, mid + 1, right, x);
    }

    return -1;
}

/*int solan(int arr[],int n,int x){
	int dem=0;
	for (int i=0;i<n;i++){
		if (arr[i]==x) dem+=1;
	}
	return dem;
}
*/

int main() {
	int n,x,dem;
    int *arr;
    
    printf("nhap n ");
    scanf("%d",&n);
    
    printf("nhap x ");
    scanf("%d",&x);
    
    arr=(int*) calloc(n,sizeof(int));
    
    for (int i=0; i<n; i++){
        printf("nhap arr[%d]= ",i);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) {
        printf("Khong tim thay so %d trong mang ", x);
    } else {
        printf("So %d duoc tim thay tai vi tri %d trong mang ", x, result);
    }
    
    /*dem=solan(arr,n,x);
    printf("\nso lan xuat hien cua %d trong mang la %d \n",x,dem);
    */
    printf("\nmang da sap xep la ");
    for (int i=0; i<n; i++){
    	printf("%3d", arr[i]);
	}
	
    return 0;
}
