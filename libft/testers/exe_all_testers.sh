reset_dir=$PWD

cd $(dirname "$0")

script_dir=$PWD
libft_dir=$script_dir/..
war_machine_dir=$script_dir/libft-war-machine-master
unit_test_dir=$script_dir/libft-unit-test
libft_tester_dir=$script_dir/libftTester

# war machine
cd $libft_dir/
sh $war_machine_dir/grademe.sh

# unit test
cd $libft_dir/ && make bonus
cd $unit_test_dir/ && make && make f

# libft tester
cd $libft_dir/ && make fclean
cd $libft_tester_dir/ && make a

# fclean
cd $libft_dir/ && make fclean

# reset directory
cd $reset_dir
