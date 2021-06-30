/* swapping function*/
void swap_max(int arr[], int l, int n){
int max = arr[n];
int t,j;
for(int i=n; i<l; i++){
if( arr[i] > max)
max = arr[i];
}
for(j=0; j<l; j++){
if(max == arr[j])
break;
}
t= arr[n];
arr[n] = arr[j];
arr[j]= t;
}

void ssort(int arr[], int l){
for(int i=0; i<l; i++){
swap_max(arr[], l, i);
}
}
