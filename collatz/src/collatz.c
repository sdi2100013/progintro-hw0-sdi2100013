#include<stdio.h>
#include<stdlib.h>



int main(int argc, char **argv){
	if (argc != 3) {
		printf("You may better try tow numbers like : 12 289\n");
 		return 1;
	}
	int MINNUM = atoi(argv[1]);
	int MAXNUM = atoi(argv[2]);
	if(MAXNUM < MINNUM){
		int swap;
		swap = MAXNUM;
		MAXNUM = MINNUM;
		MINNUM = swap;
	}
	int   seq , seqf , seqs = 0, bignum, bseq ;
	long long n, i, dig;
	for(i = MINNUM; i <= MAXNUM; i++ ){
		n = i;
		if(n <= 0 ){             
			printf("0");
			break;
			return 0;
		}	
		seqf = 2;
		while(n > 2){					
			dig = n;
			if(dig == bignum){       	    // in many sequences the numbers are reapeting them selfs 3:3 10 5 16 8 4 2 1
				seqf = seqf + bseq;        //                                                       10: 10 5 16 8 4 2 1 
				continue;                 // so we don't have to count the bigestnum with the bigest sequence(since the number we have on test)
			}
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
			 	bignum = n;
			 	bseq = seq;
			 }
			 else{
			 	seq = seqs ;
			 	bignum = n;
			 	bseq = seq;
			 }	 
	}
	printf(" \n bigest seq is %d ", seq);
}

