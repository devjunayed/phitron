#include<stdio.h>

void print_an_array(int n, int arr[], int index){
    if(index == n){
        return;
    }
    printf("%d", arr[index]);

    print_an_array(n, arr, index+1);
}

int main(){ 
  int n;
  scanf("%d", &n);

  int arr[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  print_an_array(n, arr, 0);
  return 0;
}