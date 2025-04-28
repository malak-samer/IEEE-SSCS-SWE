    1  touch dementor-invasion.c
    2  git add .
    3  git commit -m "task"
    4  git push origin main
    5  git rest --soft HEAD~1
    6  git reser --soft HEAD~1
    7  git reset --soft HEAD~1
    8  git push origin main --force
    9  touch rollback-task.sh
   10  cat history > rollback-task.sh
   11  history > rollback.sh
