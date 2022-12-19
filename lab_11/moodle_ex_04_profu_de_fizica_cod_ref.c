#include<stdio.h>

#define MAX 256
#define NUMGRADES 4
#define THRESHOLD_GRADES 38
#define MIN_DIFF 3

enum StudentState{
  FAILED,
  PASS,
  NONE = -1
};

struct Student{
  char name[MAX];
  int grades[NUMGRADES];
  enum StudentState state;
};

int main(){
  int N;
  scanf("%d", &N);
  struct Student students[N];
  //read data in
  for(int i = 0 ; i < N; i++){
    scanf(" %[^,],%d %d %d %d", students[i].name, &students[i].grades[0], &students[i].grades[1], &students[i].grades[2], &students[i].grades[3]);
    students[i].state = NONE;
  }
  //round
  for(int i = 0; i < N; i++ ){
    for(int j = 0 ; j < NUMGRADES; j++){
      if(students[i].grades[j] < THRESHOLD_GRADES) continue;
      int nextMultFive = (students[i].grades[j] / 5 + 1) * 5;
      if( (nextMultFive - students[i].grades[j]) < MIN_DIFF ) students[i].grades[j] = nextMultFive;
    }
  }
  //compute mean and set status
  for(int i = 0 ;i < N; i++){
    int sum = 0;
    for(int  j = 0 ; j < NUMGRADES; j++){
       sum += students[i].grades[j];
    }
      int mean = sum / NUMGRADES;
      if(mean >= 50) students[i].state = PASS;
      else if(mean < 50) students[i].state = FAILED;
  }
  //print
  for(int i = 0; i < N; i++){
    if(students[i].state == PASS) printf("%s TRECUT\n", students[i].name);
    else if(students[i].state == FAILED) printf("%s PICAT\n", students[i].name);
  }

  return 0;
}
