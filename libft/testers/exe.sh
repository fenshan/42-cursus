facil_dir=~/Desktop/libft/testers/libft-war-machine-master/
dificil_dir=~/Desktop/libft/testers/libft-unit-test/
lento_dir=~/Desktop/libft/testers/libftTester/

sh $facil_dir/grademe.sh
cd ~/Desktop/libft/ && make bonus 
cd $dificil_dir && make && make f
cd ~/Desktop/libft/ && make fclean
cd $lento_dir && make a
cd ~/Desktop/libft/ && make fclean
