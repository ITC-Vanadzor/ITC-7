//Sea battle assembler

rga-Hishoxutyan skzbnakan hascen
rgb
rgc
rgd
rge
rgf
rgg-zangvaci arajin elementi hascen

mov
add -> rgd=rgb+rgc
sub -> rgd=rgb-rgc
mul -> rgd=rgb*rgc

jmp
jz -> rgd==0
jnz -> rgd!=0
jeq -> rgd==0
jms -> rgd<0 

_______________________________________________________________________
+++++++++++++++++++++++++++assembler++++++++++++++++++++++++++++
-----------------------------------------------------------------------

	mov $0,-4(%rga) //flag=0
	mov $0,-5(%rga) //counter=0
	
	mov $9,-9(%rga) // n=9

	mov $0,rge // i=0
	jmp c1end
cikl1:
	mov $0,rgf //j=0
	jmp c2end
cikl2:
	mov rgb, rge
	mov rgc,$9
	mul

	mov rgb,rgd
	mov rgc,rgf
	add

	mov rgb,[rgg]
	mov rgc, rgd
	add

	mov rgb,rgd
	mov rgc,0
	sub
	
	jz ELSE1
	
	mov rgb, -4(%rga)//!flag
	mov rgc, $0
	sub
	jnz L1

	mov rgb, rge//!i
	mov rgc, $0
	sub
	jnz L1

	mov rgb,rge //rgd=i-1
	mov rgc,$1
	sub

	mov rgb, rgd//!matrix[i-1][j]
	mov rgc,$9
	mul

	mov rgb,rgd
	mov rgc,rgf
	add

	mov rgb,[rgg]
	mov rgc, rgd
	add

	mov rgb,rgd
	mov rgc,0
	sub
	
	jnz L1
	
	mov rgb, -5(%rga) //counter++
	mov rgc, $1
	add
	mov -5(%rga),rgd

	mov $1, -4(%rga) // flag=1
	jmp L1

   ELSE1:
	mov $0, -4(%rga) //flag=0
	
   L1:
	mov rgb, rgf//j++
	mov rgc, $1
	add
	mov rgf,rgd
c2end:
	mov rgb, rgf//j<9
	mov rgc, $9
	sub
	jms cikl2

	mov rgb, rge//i++
	mov rgc, $1
	add
	mov rge,rgd
c1end:
	mov rgb, rge//i<9
	mov rgc, $9
	sub
	jms cikl1


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








