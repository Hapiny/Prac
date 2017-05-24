compiler = g++
include_flg = -Iinclude/controller -Iinclude/model -Iinclude/interface -Iinclude/utils
src_flg = src/controller/*.cpp src/model/*.cpp src/interface/*.cpp src/utils/*.cpp
comp_flg = -std=c++14 -Wall -Werror
test_flg = --coverage -fprofile-dir=test/GCNO_GCDA -Itest/googletest/include test/src/*.cpp test/libgtest.a -pthread

user: src/main.cpp
	$(compiler) $(comp_flg)  $(include_flg) $(src_flg) src/main.cpp -o user

admin: src/admin.cpp
	$(compiler) $(comp_flg)  $(include_flg) $(src_flg) src/admin.cpp -o admin	

tests: test/src/*.cpp
	mkdir test/GCNO_GCDA
	$(compiler) $(comp_flg) $(include_flg) $(test_flg) $(src_flg) -o tests
	mv *.gcno test/GCNO_GCDA
	
clean: 
	rm user admin tests *.info -R test/GCNO_GCDA -R coverage
	rm -R users/Gleb
	
coverage:
	lcov -c --directory test/GCNO_GCDA -o coverage.info
	mkdir coverage
	genhtml coverage.info -o coverage --demangle-cpp
	firefox --new-tab coverage/index.html


	

