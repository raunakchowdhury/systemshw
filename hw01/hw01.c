# include <stdio.h>

//Find the sum of all the multiples of 3 or 5 below 1000.
int multiple_sum(int number){
  int each_number;
  int total;
  for (each_number = 0; each_number < number; each_number++){
    if (each_number % 3 == 0){
      total+=each_number;
    }
    else if (each_number % 5 == 0){
      total+=each_number;
    }
  }
  return total;
}

// hardcoded version
int smallest_positive_multiple(){
  int solution = 20;
  while(!(solution % 11 == 0 &&
        solution % 12 == 0 &&
        solution % 13 == 0 &&
        solution % 14 == 0 &&
        solution % 15 == 0 &&
        solution % 16 == 0 &&
        solution % 17 == 0 &&
        solution % 18 == 0 &&
        solution % 19 == 0 &&
        solution % 20 == 0 )){
          solution += 20;
        }
  //int number = factor + 1;
  //int current_factor;
  //while

  //find the product of all the factors up to factor
  /*
  for (current_factor = 2; current_factor <= factor; current_factor++){
    solution = solution * current_factor;
  }
  while (number != 2520){//solution){
    for (current_factor = 2; current_factor <= factor; current_factor++){
      if(number % current_factor != 0){
        break;
      }
    }
    //current_factor will be set to 21 if the factor-checking loop completes
    if(number % 1000 == 0){
      printf("Reached!\n" );
    }
    if (current_factor == 21){
      break;
    }
  }
  solution = number;
  */
  return solution;
}

int power(int base, int exponent){
  int index;
  int result = 1;
  for (index = 1; index <= exponent; index++){
    result *= base;
  }
  return result;
}

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int sum_square_difference(int number){
  int sum_of_squares = 0;
  int square_of_sum = 0;
  int start_num;
  for (start_num = 1; start_num <= number; start_num++){
    sum_of_squares += power(start_num, 2);
    square_of_sum += start_num;
  }
  square_of_sum = power(square_of_sum, 2);
  return square_of_sum - sum_of_squares;
}


int main(){
  printf("Hello World!\n");
  printf("Generating sum of multiples of 3 and 5 up to 1000: %d\n", multiple_sum(1000));
  printf("Smallest positive number evenly divisible by all of the numbers from 1 to 20: %d\n", smallest_positive_multiple());
  printf("difference of sum of squares and the square of the sum for 100: %d\n", sum_square_difference(100));
}
