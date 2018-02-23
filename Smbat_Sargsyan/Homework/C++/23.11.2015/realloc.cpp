/*    realloc изменяет размер ранее выделенного  блока памя-
      ти, на который указывает ptr. Размер этого блока после
      обращения к realloc определяется параметром size. Если
      size равен 0,  блок освобождается и возвращается NULL.
      Если ptr равен  NULL,  то отводится  (по malloc)  size
      байтов памяти и возвращается  указатель на этот массив
      памяти.  Если для расширения  текущего  блока места не
      хватает, будет размещен новый блок, а текущий блок ос-
      вободится. Текущие данные перепишутся в новый блок
*/
#include <iostream>
#include <cstdlib>
void *Real(void*ptr, int n,size_t size)
{
    if(size==0)
       {
           return NULL;
       }
        void* newmemory;
        if(ptr==NULL)
          {
              newmemory=malloc(sizeof(size_t)*size);
              int min=(n<size) ? n : size;
              for(int i=0;i<min;i++)
               {
                  *((char*)newmemory+i) = *((char*)ptr+i);
               }
	                
              free(ptr); 
              return newmemory;
		 
	}
 }          
int main()
{
    int n;
    std::cout << "n= ";
    std::cin >> n;
    int* array=(int*)malloc(n*sizeof(int));
    for (int i=0; i<n; i++)
	 {
                std::cout << "array[" << i  << "]=";
		std::cin>> array[i];
	 }
    int size;
    std::cout << "size=";
    std::cin >> size;
    int* result=(int*) Real(array,n,size) ;
    int i = 0;
    while(i < size)
     {
        std::cout << result[i] << std::endl;
        ++i;
     }
    free(result);	
    return 0;
}
