#include<stdio.h>

#define MINNUM 100
#define MAXNUM 1000000


int main(){
	int   seq , seqf , seqs = 0 ;
	long long n, i, dig;
	for(i = MINNUM; i <= MAXNUM; i++ ){
		n = i;
		if(n <= 0 ){
			printf("0");
			break;
			return 0;
		}
		
		seqf = 2;
		printf("\n%d  \n ", n);
		while(n > 2){					
			dig = n;
			if(dig % 2 == 0){
				n/=2;
				seqf++;
				
			}
			else{
				n = 3 * n + 1;
				n /= 2;						// AFTER N=3*N+1 ALWAYSS FOLLOWS N/=2
				seqf = seqf + 2;
				
			}
	
		}
			 if (seqf > seqs){
			 	seq = seqf;
			 	seqs = seqf ;
			 }
			 else{
			 	seq = seqs ;
			 };
	}
	printf(" \n bigest seq is %d ", seq);
}
