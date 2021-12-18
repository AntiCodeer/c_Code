/*This is a implementation of Binary search*/
#include <stdio.h>  //defining headers

void b_search(int a[],int key,int n) {
  int first=0,last=n-1,mid=(first+last)/2;
  while (first<=last) {
    if (a[mid]<key) {
      first = mid + 1;
    }
    else if (a[mid]==key) {
      printf("\n%d Element Found in %d Position.",key,mid+1);
      break;
    }
    else {
      last = mid - 1;
    }
    mid = (first+last)/2;
  }
  if (first>last) {
    printf("%d Element not found in the Array.",key);
  }
  return;
}

int main(int argc, char const *argv[]) {
  int n,a[n],key;
  printf("\nInput :- \n");
  printf("\nEnter the No of Elements :- ");
  scanf("%d", &n);
  for(int i=0; i<n; ++i) {
    printf("\na[%d] = ", i+1);
    scanf("%d", a+i);
  }
  printf("\nEnte the Key :- ");
  scanf("%d", &key);
  printf("\nOutput :- \n");
  b_search(a,key,n);
  printf("\n");
  return 0;
}
