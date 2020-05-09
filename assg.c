#include<stdio.h>
#include<math.h>
int size=0,a[100];
void insert(int);
int min();
void main(){
    int n,i,ele;
    printf("enter the size of heap:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        insert(ele);
    }
    for(i=0;i<n;i++)
        printf("%d,",min());
        printf("\n");
}
void insert(int ele){
   size++;
    a[size]=ele;
    int new=size;
    while(a[new/2]>ele){
        a[new]=a[new/2];
        new/=2;
    }
   a[new]=ele;
}
int min(){
    int mini,last,child,new;
    mini=a[1];
    last=a[size--];
    for(new=1;new*2<=size;new=child){
        child=new*2;
        if(child!=size&&a[child+1]<a[child]){
            child++;
        }
        if(last>a[child]){
            a[new]=a[child];
        }
        else
             break;
    }
    a[new]=last;
    if(size%2==0)
      mini=mini-1;
      else
      mini=mini+1;
    return mini;
}



