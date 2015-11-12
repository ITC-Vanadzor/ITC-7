//Sea battle assembler


_______________________________________________________________________
+++++++++++++++++++++++++++assembler++++++++++++++++++++++++++++
-----------------------------------------------------------------------

	mov $0,-4(%rga)
	mov $0,-5(%rga)
	mov $9,-13(%rga)
	mov $9,-20(%rga)

	mov $0,-9(%rga)
	jmp c1end
cikl1:
	mov $0,-17(%rga)
	jmp c2end
cikl2:
	lea rgb,(-9(%rga),%rgc,-17(%rga))
	cmp $0, (%rgb)
	je ELSE1
	
	cmp $0, -4(%rga)
	jne L1

	cmp $0, -9(%rga)
	jne L1

	mov rgx,-9(%rga)
	add $-1,rgx
	lea rgb,(rgx,%rgc,-17(%rga))
	cmp $0, (%rgb)
	je L1
	
	add $1, -5(%rga)
	mov $1, -4(%rga)
	jmp L1

   ELSE1:
	mov $0, -4(%rga)
	
   L1:
	add $1,-17(%rga)
c2end:
	cmp -17(%rga),-20(%rga)
	jl cikl2

	add $1,-9(%rga)
c1end:
	cmp -9(%rga),-13(%rga)
	jl cikl1


_______________________________________________________________________
+++++++++++++++++++++++++++cpp++++++++++++++++++++++++++++
-----------------------------------------------------------------------


int hashvir_naverin(int **matrix,int n, int m){


	bool flag=0;
	
	int counter=0;
	
	for(int i=0;i<n;++i){

	for(int j=0;j<m;++j){

	  if(matrix[i][j]){

	   if(!flag && (!i || !matrix[i-1][j]))

		{counter++;flag=1; }

	    }

	   else{
		flag=0;
		}

	  }

	}

	 return counter;

}







