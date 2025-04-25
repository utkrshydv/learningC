#include <stdio.h>
#include <stdlib.h>

void transverse(int* p, int size){
  printf("The elements in the array are: \n");
  for(int i=0; i<size; i++, p++){
    printf("array[%d]: %d \n", i, *p);
  }
  free(p);
}

void insertElement(int *p, int size){
  
  int element, index;
  printf("Enter element to insert:  \n");
  scanf("%d", &element);

  printf("Enter index to insert it at:  \n");
  scanf("%d", &index);

  p = realloc(p, sizeof(int)*(size+1));
  int dupSize = size;
  for(int i = size+1; i>index; i--, dupSize--){
        *(p+i) = *(p+dupSize);
  }
  *(p+index) = element;
  printf("Updated Array: \n");
  transverse(p, size+1);
}

void linearSearch(int* p, int size){
    int element;
    printf("Element to search for: ");
    scanf("%d", &element);
    for(int i=0; i<size; i++, p++){
        if(*p == element){
          printf("Element found at position %d", i+1);
          free(p);
          return;
        } 
    }
    printf("Element not found");
    free(p);
}

void deleteElementbyIndex(int* p, int size){
  int index;
  printf("Index at which element is to be deleted: ");
  scanf("%d", &index);

  for(int i=size; i>index; index++){
    *(p+index) = *(p+index+1);
  }
  printf("Updated array: \n");
  transverse(p, size-1);

}

int main(){
  int choice;
  int size;
  printf("Enter number of elements: ");
  scanf("%d", &size);
  
  int* array = (int*)malloc(sizeof(int)*size);

  printf("Enter Elements: \n");
  for(int i = 0; i<size; i++){
    printf("array[%d] = ", i);
    scanf("%d", &array[i]);
  }


  printf("***MENU****\n");
  printf("1. INSERT\n");
  printf("2. DELETE\n");
  printf("3. LINEAR SEARCH\n");
  printf("4. TRANSVERSE\n");
  printf("5. EXIT\n");
  printf("Enter a choice: ");
  scanf("%d", &choice);

  switch(choice){

    case 1: 
      insertElement(array, size);
      break;

    case 2: 
      deleteElementbyIndex(array, size);
      break;

    case 3:
      linearSearch(array, size);
      break; 
    
    case 4:
      transverse(array, size);
      break;
    
    case 5:
    free(array);
    printf("exited the menu");
    return 0;
    break;

  }

  
}