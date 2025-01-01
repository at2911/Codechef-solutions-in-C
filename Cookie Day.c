#include <stdio.h>

int main() {
	int t,n,k,q,r,w=0,i,c;
	scanf("%d",&t);
	while(t>0){
	    scanf("%d",&n);
	    scanf("%d",&k);
	     w=k;
	    
	    int a[n];
	    c=0;
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        q=a[i]/k;
	        
	        if(q==0){
	            c++;
	            continue;
	        }
	       
	        r=a[i]%k;
	        if(r<w){
	            w=r;
	        }
	        
	    }
	    if(q==0&& c==n){
	        printf("%d\n",-1);
	    }
	    else{
	        printf("%d\n",w);
	    }
	    t--;
	    
	}

}


