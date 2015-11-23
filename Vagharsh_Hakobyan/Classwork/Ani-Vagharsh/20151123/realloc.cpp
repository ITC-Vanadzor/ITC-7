int main()
{
  int input;
  int counter = 0;                                     // счетчик введенных чисел
  int * values = NULL;
  int * many_numbers;
 
  do {
     std::cout << "Введите целое значение (0 - выход): ";
     std::cin >> input;
     counter++;
 
     many_numbers = (int*) realloc (values, counter * sizeof(int)); // при добавлении нового числа, увеличиваем массив на 1
 
     if (many_numbers != NULL)
     {
       values = many_numbers;
       values[counter - 1] = input;                      // добавить к массиву только что введённое число
     }
     else
     {
       free (values);                                   // удалить массив
       std::cout << "Ошибка перевыделения памяти!";
       exit (1);                                          // завершить работу программы
     }
  } while (input != 0);                                   // пока не введён 0
 
  std::cout << "Введенные числа: ";
  for (int ix = 0; ix < counter; ix++) std::cout << values[ix] << " ";
  free (values);                                         // удалить массив
 
  return 0;
}
