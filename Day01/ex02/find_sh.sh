ls -Rl | grep ^-  | grep  .sh$ | cut -d ":" -f 2 | cut -c5- | sed 's/...$//'
