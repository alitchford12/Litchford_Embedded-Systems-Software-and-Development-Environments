/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Function definitions for statistical analysis of an array
 *
 * Function definitions for functions that can analyze an array of 
 * unsigned char data items and report analytics on the maximum, minimum,
 * mean, and median of the data set.
 *
 * @author Ariana Litchford
 * @date 11/17/26
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  printf("Original array:\n");
  print_array(test, SIZE);

  printf("\n");

  printf("Sorted array:\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);

  printf("\n");
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

unsigned char find_median(unsigned char *data, unsigned int size)
{
  if (size == 0) {
    return 0;
  }
  sort_array(data, size);
  if (size % 2 == 0) {
    return (unsigned char) (((unsigned int)data[size / 2 - 1] + data[size / 2]) / 2);
  } else {
    return data[size / 2];
  }
}

unsigned char find_mean(unsigned char *data, unsigned int size)
{
  if (size == 0) {
    return 0;
  }
  unsigned int sum = 0;
  for (unsigned int i = 0; i < size; i++) {
      sum += data[i];
  }
  return (unsigned char) (sum / size);
}

unsigned char find_maximum(unsigned char *data, unsigned int size)
{
  sort_array(data, size);
  return data[0];
}

unsigned char find_minimum(unsigned char *data, unsigned int size)
{
  sort_array(data, size);
  return data[size - 1];
}

void sort_array(unsigned char *data, unsigned int size)
{
  for(unsigned int i = 0; i < size; i++) {
    for (unsigned int j = 0; j < size - i - 1; j++) {
      if (data[j] < data[j + 1]) {
        unsigned char temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

void print_statistics(unsigned char *data, unsigned int size)
{
  printf("Minimum: %u\n", find_minimum(data, size));
  printf("Maximum: %u\n", find_maximum(data, size));
  printf("Mean: %u\n", find_mean(data, size));
  printf("Median: %u\n", find_median(data, size));
}

void print_array(unsigned char *data, unsigned int size)
{
  for (unsigned int i = 0; i < size; i++) {
    printf("data[%u]: %u\n", i, data[i]);
  }
}
