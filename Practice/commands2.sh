  415  cat commands_practical.sh
  416  cat commands_practice1.sh
  417  ls
  418  ./commands.sh
  419  ls
  420  mv commands_practice1.sh Practice/commands1.sh
  421  cd Practicals
  422  cd Practice
  423  ls
  424  ./commands.sh
  425  cd ..
  426  ls
  427  ./commands.sh
  428  cd -
  429  cd projects
  430  ls
  431  cat>file1.txt
  432  cat>file2.txt
  433  vi file2.txt
  434  cat file1.txt file2.txt combined.txt
  435  cat file1.txt file2.txt>combined.txt
  436  cat combined.txt
  437  cat>>file1.txt
  438  cp file1.txt file1_backup.txt
  439  ls
  440  cat file1_backup.txt
  441  mkdir backup_dirv
  442  cp *.txt backup_dirv
  443  ls backup_dir
  444  ls backup_dirv
  445  mkdir tmp|cp file1.txt /tmp
  446  mkdir tmp|cp file1.txt tmp
  447  ls
  448  cd tmp|ls
  449  cd tmp
  450  ls
  451  mv file1.txt file1_tmp.txt
  452  cd ../..
  453  ls
  454  ls projects
  455  mkdir archive
  456  mv file1.txt archive/file1_tmp.txt
  457  mv file2.txt file2_renamed.txt
  458  ls
  459  mv file2.txt projects/file2_renamed.txt
  460  mv projects/file2.txt projects/file2_renamed.txt
  461  find . -type d -name "backup_dirv"
  462  du -rch projects/backup_dirv
  463  du -Rch projects/backup_dirv
  464* 
  465  du -ch projects/backup_dirv
  466  cd ../
  467  ls
  468  cd Practice
  469  history |tail -40
  470  history |tail -50
  471  history |tail -60
  472  ls
  473  cd projects
  474  ls
  475  cd ../../
  476  ls
  477  cd Practice
  478  ls
  479  history |tail -65 |cat > commands2.sh
