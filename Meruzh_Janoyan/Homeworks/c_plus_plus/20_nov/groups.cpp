//groups  used graph

#include<iostream>
#include<stdlib.h>
int *num_first;
int *num_second;
int m=0;
int print_counter=0;


int add_great_group(int great_group[],int number,int size_of_great){

    for(int i=0;i<size_of_great;++i){
        if(great_group[i]==number) return size_of_great;
    }
    great_group[size_of_great]=number;
    return size_of_great+1;
}
int* create_great_group(int &size_of_great){

    int *great_group=(int*)malloc(sizeof(int)*2*m);
    for(int i=0;i<m;++i){
        if(num_first[i]==0 || num_second[i]==0) continue;
        size_of_great=add_great_group(great_group,num_first[i],size_of_great);
        size_of_great=add_great_group(great_group,num_second[i],size_of_great);
    }
    return great_group;
}

void values_for_box(bool **super_box,int n){

    for(int i=0;i<=n;++i){
        for(int j=0;j<=n;++j){
            super_box[i][j]=false;
        }
    }

    for(int i=0;i<m;++i){
            int a=num_first[i];
            int b=num_second[i];

            super_box[b][a]=super_box[a][b]=true;

    }
}
bool it_is_group(bool **super_box,int n,int buffer[],int counter){
    if(counter<2) return false;
    for(int i=0;i<counter;++i){
        for(int j=0;j<counter;++j){
                if(i==j) continue;
                if(super_box[buffer[i]][buffer[j]]==false) return false;
        }
    }
    return true;
}
void print(bool **super_box,int n,int buffer[],int counter){

    static int group_number=1;
    std::cout<<"Group N:"<<group_number<<std::endl;
    for(int i=0;i<counter;++i){
            for(int j=i+1;j<counter;++j){
                        std::cout<<buffer[i]<<"-"<<buffer[j]<<"     ";
            }
    }
    std::cout<<std::endl;
     for(int i=0;i<counter;++i){
            for(int j=0;j<n;++j){
                super_box[buffer[i]][j]=false;
              //  super_box[j][buffer[i]]=false;
            }
     }
     print_counter-=counter;
}
void print_groups(bool **super_box,int n){
        int counter=1;
       for(int i=0;i<n;++i){
            int *buffer=new int [n];
            buffer[0]=i;
        for(int j=0;j<=n;++j){
            if(super_box[i][j]){
                buffer[counter++]=j;
            }
        }
        if(it_is_group(super_box,n,buffer,counter)){
            print(super_box,n,buffer,counter);
        }
        counter=1;
    }

}
int main(){

    int n=0;
    std::cout<<"N:"; std::cin>>n;
    std::cout<<"M:"; std::cin>>m;

    num_first=new int[m];
    num_second=new int[m];

    for(int i=0;i<m;++i){
        std::cout<<"input first:";
        std::cin>>num_first[i];
        if(num_first[i]>n) return 0;
        std::cout<<"input second:";
        std::cin>>num_second[i];
        if(num_second[i]>n) return 0;
    }

    int size_of_great=0;
    int *greate_group=create_great_group(size_of_great);

    bool **super_box=new bool*[n+1];
    for(int i=0;i<=n;++i){
        super_box[i]=new bool [n+1];
    }

    values_for_box(super_box,n);

    print_counter=size_of_great;
    while(print_counter>0){
        print_groups(super_box,n);
    }



    delete super_box;
    delete num_first;
    delete num_second;

return 0;
}
