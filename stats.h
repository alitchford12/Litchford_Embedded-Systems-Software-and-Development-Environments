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
 * @file stats.h
 * @brief Declarations for statistical analytic functions
 *
 * This file declares functions that can analyze an array of 
 * unsigned char data items.
 *
 * @author Ariana Litchford
 * @date 11/17/26
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Finds the median of an array
 *
 * Given an array of data and a length, returns the median value
 *
 * @param data Pointer to the array
 * @param size Size of the array
 *
 * @return The median value as an unsigned char
 */
unsigned char find_median(unsigned char *data, unsigned int size);

/**
 * @brief Finds mean value of an array
 * 
 * Given an array of data and a length, returns the mean
 * 
 * @param data Pointer to the array
 * @param size Size of the array
 * 
 * @return The mean value as an unsigned char
 */
unsigned char find_mean(unsigned char *data, unsigned int size);

/**
 * @brief Finds the max value of an array
 * 
 * Given an array of data and a length, returns the maximum
 * 
 * @param data Pointer to the array
 * @param size Size of the array
 * 
 * @return Maximum value as an unsigned char
 */
unsigned char find_maximum(unsigned char *data, unsigned int size);

/**
 * @brief Finds the min value of an array
 * 
 * Given an array of data and a length, returns the minimum
 * 
 * @param data Pointer to the array
 * @param size Size of the array
 * 
 * @return Minimum value as an unsigned char
 */
unsigned char find_minimum(unsigned char *data, unsigned int size);

/**
 * @brief Sorts and array largest to smallest
 * 
 * Given an array of data and a length, sorts the array from largest to smallest.
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.)
 * 
 * @param data Pointer to the array
 * @param size Size of the array
 * 
 * @return void
 */
void sort_array(unsigned char *data, unsigned int size);

 /**
 * @brief Prints min, max, mean, and median
 * 
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * 
 * @param data Pointer to the array
 * @param size Size of the array
 * 
 * @return void
 */
void print_statistics(unsigned char *data, unsigned int size);

/**
 * @brief Prints array
 *
 * Given an array of data and a length, prints the array to the screen
 * 
 * @param data Pointer to the array
 * @param size Size of the array
 *
 * @return void
 */
void print_array(unsigned char *data, unsigned int size);

#endif /* __STATS_H__ */
