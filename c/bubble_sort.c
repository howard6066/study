#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b= temp;
}
 
int bubble_sort(int A[], int n){
  int i, j, flag;
  for(i = 0; i<n-1; i++){ //n计逼ノ n-1 
    int flag = 0; //ボΤ礚祇ネユ传
    for(j = 0; j < n-i; j++){ //眖材计秨﹍ゑ耕程计
      if(A[j]>A[j+1]){
        swap(&A[j], &A[j+1]);
        flag = 1;
      }
    }
    if(flag == 0) break; //⊿Τ祇ネユ传
  }
}
 
int main(){
  int count, i;
  printf("Please input num: ");
  scanf("%d", &count);

  int list[count];
  printf("Numbers to be sorted: ");
  for(i = 0; i<count; i++){
    scanf("%d", &list[i]);
    printf("%d ", list[i]);
  }
  printf("\n");
  bubble_sort(list, count);
  printf("Numbers Sorted: ");
  for(i = 0; i<count; i++){
    printf("%d ", list[i]);
  }
  system("pause");
  return 0;
}