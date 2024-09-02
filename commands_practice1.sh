  379  mkdir projects
  380  cd projects
  381  mkdir project1 project2 project3
  382  ls
  383  cd project1
  384  touch README.txt
  385  cd ../project2
  386  cat>notes.txt
  387  cd ~ | ls -la
  388  cd ~
  389  ls -la
  390  ls -lar
  391  ls -lar .
  392  ls -laR
  393  cd -
  394  cd ../project3
  395  rmdir project3
  396  cd ..
  397  rmdir project3
  398  ls
  399  cd project2
  400  ls
  401  rm notes.txt
  402  cd ../project1
  403  touch script.sh
  404  chmod u+rw,g=r,o=0 script.sh
  405  ls -l script.sh
  406  chmod u+rw,g=r,o-r script.sh
  407  ls -l script.sh
  408  history | tail -20
  409  history | tail -35
  410  cd ../../..
  411  cd projects
  412  cd practice
  413  history | tail -35 |cat>commands_practice1.sh
