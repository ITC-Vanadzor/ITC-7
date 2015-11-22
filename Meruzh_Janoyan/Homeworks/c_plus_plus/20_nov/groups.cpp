//groups

#include<iostream>
#include<stdlib.h>


void remove_from_massive(int n_f[],int n_s[],int ind[],int buf_size){

    for(int i=0;i<=buf_size;++i){
        n_f[ind[i]]=0;
        n_s[ind[i]]=0;
    }
}
void print_buffer(int f_b[],int s_b[],int buf_size,int counter){

    std::cout<<"GROUP N"<<counter++<<std::endl;
    for(int i=0;i<=buf_size;++i){
            std::cout<<f_b[i]<<"--"<<s_b[i]<<"    ";
    }
    std::cout<<std::endl;
}
int find_element(int n_f[],int n_s[],int m,int element1,int element2){

    for(int i=0;i<m;++i){

        if((n_f[i]==element1 && n_s[i]==element2) || (n_f[i]==element1 && n_s[i]==element2)) return i;
        }

        return -1;
}
void print_groups(int n_f[],int n_s[],int m){

    int *first_buf=(int*)malloc(m*sizeof(int));
    int *second_buf=(int*)malloc(m*sizeof(int));
    int *index_buf=(int*)malloc(m*sizeof(int));
    int buf_size=0;

    int counter=1;
    for(int i=0;i<m;++i){
        if(n_f[i]==0 || n_s[i]==0) continue;

        first_buf[buf_size]=n_f[i];
        second_buf[buf_size]=n_s[i];

        for(int j=0;j<m;++j){

            if(second_buf[buf_size ]==n_f[j]){
                ++buf_size;
                first_buf[buf_size]=n_f[j];
                second_buf[buf_size]=n_s[j];
                index_buf[buf_size]=j;
            }
        }
        int index=find_element(n_f,n_s,m,first_buf[0],second_buf[buf_size]);

        if(index!=-1 && buf_size>1){
            ++buf_size;
            first_buf[buf_size]=n_f[index];
            second_buf[buf_size]=n_s[index];
            index_buf[buf_size]=index;
            print_buffer(first_buf,second_buf,buf_size,counter++);
            remove_from_massive(n_f,n_s,index_buf,buf_size);
        }
        buf_size=0;
    }

    for(int i=0;i<m;++i){
        if(n_f[i]!=0 && n_s[i]!=0){
         std::cout<<"GROUP N"<<counter++<<std::endl;
         std::cout<<n_f[i]<<"--"<<n_s[i]<<std::endl;
         }
    }
    free(first_buf);
    free(second_buf);

}
int main(){

    int n=0;
    std::cout<<"N:"; std::cin>>n;
    int m=0;
    std::cout<<"M:"; std::cin>>m;

    int *num_first=(int*)malloc(m*sizeof(int));
    int *num_second=(int*)malloc(m*sizeof(int));

    for(int i=0;i<m;++i){
        std::cout<<"input first:";
        std::cin>>num_first[i];
        if(num_first[i]>n) return 0;
        std::cout<<"input second:";
        std::cin>>num_second[i];
        if(num_second[i]>n) return 0;
    }

    print_groups(num_first,num_second,m);

    free(num_first);
    free(num_second);

return 0;
}
