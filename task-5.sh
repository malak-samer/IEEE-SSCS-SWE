  1  cd desktop
  2  cd IEE_SSCS_SWE
  3  touch output.txt
  4  touch error.txt
  5  wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/numbers.txt
  6  wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/all_in_one.c
  7  gcc all_in_one.c -o main
  8  ./main < numbers.txt > output.txt 2> error.txt 
  9  touch task-5.sh
  10  history > task-5.sh
