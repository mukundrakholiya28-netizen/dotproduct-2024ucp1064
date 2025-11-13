#include <stdio.h>
int main(){
int A[] = {34,54,32,64,2,34,563,2,36,5,37,57,6,6,53,24,645};
int l = sizeof(A)/sizeof(A[0]);
int i,j = 0;
for(j=0;j<l;j++){
for(i=j+1;i<l;i++){
if(A[i]< A[j]){
    int temp = A[j];
    
    A[j] = A[i];
    A[i] = temp;
}
}
}
for(i=0;i<l;i++){
printf("%d ", A[i]);
}


}

